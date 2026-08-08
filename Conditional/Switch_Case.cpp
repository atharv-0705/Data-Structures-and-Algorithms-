// Given ith day of week, Tell which dat is it

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    switch(n){
        case 1:
        cout<<"Monday";
        break;

        case 2:
        cout<<"Tueday";
        break;

        case 3:
        cout<<"Wednesday";
        break;

        case 4:
        cout<<"Thuesday";
        break;

        case 5:
        cout<<"Friday";
        break;

        case 6:
        cout<<"Saterday";
        break;

        case 7:
        cout<<"Sunday";
        break;
        
        default:
        cout<<"Invalid day";
    }


}