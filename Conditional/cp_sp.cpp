// Write a program that,
// given the cost price and selling price entered via keyboard, 
// determines whether the seller made a profit, incurred a loss, or broke even, and 
// calculates the amount of profit or loss.

#include <iostream>
using namespace std;

int main() {
    float cp,sp;
    cout<<"Enter the cost price: ";
    cin>>cp;
    cout<<"Enter the selling price: ";
    cin>>sp;

    if (cp > sp){
        cout<<"Loss of "<<cp-sp;
    }else if (cp < sp){
        cout<<"Profit of "<<sp-cp;
    }else{
        cout<<"No profit, no loss";
    }
    return 0;
}


