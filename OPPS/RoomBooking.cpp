#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <ctime>
#include <iomanip>
#include <thread>
#include <chrono>
using namespace std;

// Date structure
struct Date {
    int day, month, year;

    static Date fromString(const string& str) {
        Date d;
        sscanf(str.c_str(), "%d/%d/%d", &d.day, &d.month, &d.year);
        return d;
    }

    string toString() const {
        char buffer[11];
        sprintf(buffer, "%02d/%02d/%04d", day, month, year);
        return string(buffer);
    }

    bool isValid() const {
        if (month < 1 || month > 12 || day < 1 || day > 31) return false;
        int daysInMonth[] = {31, 28 + isLeapYear(), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        return day <= daysInMonth[month - 1];
    }

    bool isLeapYear() const {
        return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
    }

    bool operator<(const Date& other) const {
        if (year != other.year) return year < other.year;
        if (month != other.month) return month < other.month;
        return day < other.day;
    }

    int daysBetween(const Date& other) const {
        struct tm a = {0, 0, 0, day, month - 1, year - 1900};
        struct tm b = {0, 0, 0, other.day, other.month - 1, other.year - 1900};
        time_t x = mktime(&a);
        time_t y = mktime(&b);
        double seconds = difftime(y, x);
        return seconds / (60 * 60 * 24);
    }
};

// Customer structure
struct Customer {
    string name;
    string contact;
    int roomNumber;
    string roomType;
    Date checkInDate;
    Date checkOutDate;
};

class HotelManagement {
private:
    vector<Customer> customers;
    int totalRooms;
    vector<bool> rooms;
    vector<string> roomTypes = {"Single", "Double", "Suite"};

public:
    HotelManagement(int totalRooms) : totalRooms(totalRooms), rooms(totalRooms, true) {}

    void bookRoom() {
        Customer customer;
        string checkInStr, checkOutStr;

        cout << "\033[1;36mEnter Name: \033[0m";
        cin.ignore();
        getline(cin, customer.name);
        cout << "\033[1;36mEnter Contact: \033[0m";
        cin >> customer.contact;
        cout << "\033[1;36mEnter Check-In Date (DD/MM/YYYY): \033[0m";
        cin >> checkInStr;
        cout << "\033[1;36mEnter Check-Out Date (DD/MM/YYYY): \033[0m";
        cin >> checkOutStr;

        customer.checkInDate = Date::fromString(checkInStr);
        customer.checkOutDate = Date::fromString(checkOutStr);

        if (!customer.checkInDate.isValid() || !customer.checkOutDate.isValid()) {
            cout << "\033[1;31mInvalid date(s) entered!\033[0m\n";
            return;
        }

        if (!(customer.checkInDate < customer.checkOutDate)) {
            cout << "\033[1;31mCheck-Out date must be after Check-In date!\033[0m\n";
            return;
        }

        cout << "\nAvailable Room Types:\n1. Single\n2. Double\n3. Suite\nChoose Room Type: ";
        int roomTypeChoice;
        cin >> roomTypeChoice;
        if (roomTypeChoice < 1 || roomTypeChoice > 3) {
            cout << "Invalid room type selection!" << endl;
            return;
        }
        customer.roomType = roomTypes[roomTypeChoice - 1];

        cout << "\nAvailable Rooms: ";
        for (int i = 0; i < totalRooms; i++) {
            if (rooms[i]) cout << i + 1 << " ";
        }
        cout << "\nChoose Room Number: ";
        int room;
        cin >> room;

        if (room < 1 || room > totalRooms || !rooms[room - 1]) {
            cout << "\033[1;31mInvalid room selection!\033[0m\n";
            return;
        }

        customer.roomNumber = room;
        rooms[room - 1] = false;
        customers.push_back(customer);
        saveToFile();
        cout << "\033[1;32mRoom " << room << " (" << customer.roomType << ") booked successfully!\033[0m\n";
    }

    void displayBookings() {
        if (customers.empty()) {
            cout << "\033[1;33mNo bookings found.\033[0m\n";
            return;
        }

        cout << "Filter by Room Type:\n1. All\n2. Single\n3. Double\n4. Suite\nEnter choice: ";
        int filterChoice;
        cin >> filterChoice;

        string selectedRoomType = "";
        if (filterChoice > 1 && filterChoice <= 4) {
            selectedRoomType = roomTypes[filterChoice - 2];
        }

        cout << "\n\033[1;34mBooking Details:\033[0m\n";
        cout << left << setw(15) << "Name"
             << setw(15) << "Contact"
             << setw(8)  << "Room"
             << setw(10) << "Type"
             << setw(15) << "Check-In"
             << setw(15) << "Check-Out"
             << setw(8)  << "Days" << endl;
        cout << string(80, '-') << endl;

        bool found = false;
        for (const auto& c : customers) {
            if (selectedRoomType.empty() || c.roomType == selectedRoomType) {
                int duration = c.checkInDate.daysBetween(c.checkOutDate);
                cout << left << setw(15) << c.name
                     << setw(15) << c.contact
                     << setw(8)  << c.roomNumber
                     << setw(10) << c.roomType
                     << setw(15) << c.checkInDate.toString()
                     << setw(15) << c.checkOutDate.toString()
                     << setw(8)  << duration << endl;
                found = true;
            }
        }

        if (!found) {
            cout << "\033[1;33mNo bookings found for the selected room type.\033[0m\n";
        }
    }

    void cancelBooking() {
        string name;
        cout << "Enter Name to cancel booking: ";
        cin.ignore();
        getline(cin, name);

        for (auto it = customers.begin(); it != customers.end(); ++it) {
            if (it->name == name) {
                rooms[it->roomNumber - 1] = true;
                customers.erase(it);
                saveToFile();
                cout << "\033[1;32mBooking canceled successfully!\033[0m\n";
                return;
            }
        }
        cout << "\033[1;31mNo booking found for " << name << "\033[0m\n";
    }

    void saveToFile() {
        ofstream file("bookings.txt");
        for (const auto& c : customers) {
            file << c.name << "," << c.contact << "," << c.roomNumber << "," << c.roomType << ","
                 << c.checkInDate.toString() << "," << c.checkOutDate.toString() << "\n";
        }
        file.close();
    }
};

// Optional: Clear screen depending on platform
void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// Optional: Loading animation
void loadingAnimation() {
    cout << "Loading";
    for (int i = 0; i < 3; ++i) {
        cout << ".";
        cout.flush();
        this_thread::sleep_for(chrono::milliseconds(400));
    }
    cout << "\n";
}

// Welcome banner
void printBanner() {
    cout << "\033[1;35m";
    cout << "\n=========================================\n";
    cout << "         WELCOME TO HOTEL MACHAO 🌟        \n";
    cout << "=========================================\n";
    cout << "\033[0m";
}

int main() {
    HotelManagement hotel(10);

    clearScreen();
    printBanner();
    loadingAnimation();

    int choice;
    do {
        cout << "\n\033[1;36mHotel Booking Menu:\033[0m\n";
        cout << "1. Book Room\n2. View Bookings\n3. Cancel Booking\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                hotel.bookRoom();
                break;
            case 2:
                hotel.displayBookings();
                break;
            case 3:
                hotel.cancelBooking();
                break;
            case 4:
                cout << "\033[1;34mExiting the system. Thank you!\033[0m\n";
                break;
            default:
                cout << "\033[1;31mInvalid choice! Please try again.\033[0m\n";
        }
    } while (choice != 4);

    return 0;
}
