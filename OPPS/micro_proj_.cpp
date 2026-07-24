#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

// Structure to store customer details
struct Customer {
    string name;
    string contact;
    int roomNumber;
    string roomType;
    string checkInDate;
    string checkOutDate;
};

class HotelManagement {
private:
    vector<Customer> customers; // List of booked customers
    int totalRooms;
    vector<bool> rooms; // Room availability status
    vector<string> roomTypes = {"Single", "Double", "Suite"};

public:
    // Constructor initializes total rooms and marks all as available
    HotelManagement(int totalRooms) : totalRooms(totalRooms), rooms(totalRooms, true) {}
    
    // Function to book a room
    void bookRoom() {
        Customer customer;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, customer.name);
        cout << "Enter Contact: ";
        cin >> customer.contact;
        cout << "Enter Check-In Date (DD/MM/YYYY): ";
        cin >> customer.checkInDate;
        cout << "Enter Check-Out Date (DD/MM/YYYY): ";
        cin >> customer.checkOutDate;
        
        // Selecting room type
        cout << "Available Room Types:\n1. Single\n2. Double\n3. Suite\nChoose Room Type: ";
        int roomTypeChoice;
        cin >> roomTypeChoice;
        if (roomTypeChoice < 1 || roomTypeChoice > 3) {
            cout << "Invalid room type selection!" << endl;
            return;
        }
        customer.roomType = roomTypes[roomTypeChoice - 1];
        
        // Selecting available room
        int room;
        cout << "Available Rooms: ";
        for (int i = 0; i < totalRooms; i++) {
            if (rooms[i]) cout << i + 1 << " ";
        }
        cout << "\nChoose Room Number: ";
        cin >> room;
        
        // Validating room selection
        if (room < 1 || room > totalRooms || !rooms[room - 1]) {
            cout << "Invalid room selection!" << endl;
            return;
        }
        
        // Booking the room
        customer.roomNumber = room;
        rooms[room - 1] = false;
        customers.push_back(customer);
        saveToFile();
        cout << "Room " << room << " (" << customer.roomType << ") booked successfully!" << endl;
    }
    
    // Function to display all bookings with filtering option
    void displayBookings() {
        if (customers.empty()) {
            cout << "No bookings found." << endl;
            return;
        }
        
        // Filtering by room type
        cout << "Filter by Room Type:\n1. All\n2. Single\n3. Double\n4. Suite\nEnter choice: ";
        int filterChoice;
        cin >> filterChoice;
        
        string selectedRoomType = "";
        if (filterChoice > 1 && filterChoice <= 4) {
            selectedRoomType = roomTypes[filterChoice - 2];
        }
        
        bool found = false;
        for (const auto &c : customers) {
            if (selectedRoomType.empty() || c.roomType == selectedRoomType) {
                cout << "\nName: " << c.name << "\nContact: " << c.contact << "\nRoom: " << c.roomNumber
                     << " (" << c.roomType << ")\nCheck-In: " << c.checkInDate << "\nCheck-Out: " << c.checkOutDate << "\n";
                found = true;
            }
        }
        
        if (!found) {
            cout << "No bookings found for the selected room type." << endl;
        }
    }
    
    // Function to cancel a booking
    void cancelBooking() {
        string name;
        cout << "Enter Name to cancel booking: ";
        cin.ignore();
        getline(cin, name);
        
        for (auto it = customers.begin(); it != customers.end(); ++it) {
            if (it->name == name) {
                rooms[it->roomNumber - 1] = true; // Mark room as available
                customers.erase(it); // Remove booking from list
                saveToFile();
                cout << "Booking canceled successfully!" << endl;
                return;
            }
        }
        cout << "No booking found for " << name << endl;
    }
    
    // Function to save bookings to a file
    void saveToFile() {
        ofstream file("bookings.txt");
        for (const auto &c : customers) {
            file << c.name << "," << c.contact << "," << c.roomNumber << "," << c.roomType << "," << c.checkInDate << "," << c.checkOutDate << "\n";
        }
        file.close();
    }
};

int main() {
    HotelManagement hotel(10); // Initialize hotel with 10 rooms
    int choice;
    
    do {
        // Display menu
        cout << "\nHotel Booking System:\n1. Book Room\n2. View Bookings\n3. Cancel Booking\n4. Exit\nEnter choice: ";
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
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);
    
    return 0;
}