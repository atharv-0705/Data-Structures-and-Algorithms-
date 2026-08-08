// 

#include<iostream>
using namespace std;

int main(){
    int l;
    cout<<"Enter the length of the rectangle: ";
    cin>>l;
    int b;
    cout<<"Enter the breadth of the rectangle: ";
    cin>>b;

    int area = l*b;
    cout<<"Area of rectangle is: "<<area;
    int perimeter = 2*(l+b);
    cout<<"\nPerimeter of rectangle is: "<<perimeter;

    if (area > perimeter){
        cout<<"\nArea is greater than perimeter";
    }else {
        cout<<"\nPerimeter is greater than area";
    }
    return 0;
}