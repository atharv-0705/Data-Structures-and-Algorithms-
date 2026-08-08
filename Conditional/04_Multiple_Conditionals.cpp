// Given a point (x,y) in a 2D space, 
// to find out if its lies in the 1st Quadrant, 2nd Quadrant, 3rd Quadrant and 4th Quadtant
// on the X-axis, On the Y-axis or at the origin.
#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the value of x and y: ";
    cin>>x>>y;
    if(x>0 && y>0){
        cout<<"The point lies in the 1st Quadrant"<<endl;}
    else if(x<0 && y>0){
        cout<<"The point lies in the 2nd Quadrant"<<endl;}
    else if(x<0 && y<0){
        cout<<"The point lies in the 3rd Quadrant"<<endl;}
    else if(x>0 && y<0){
        cout<<"The point lies in the 4th Quadrant"<<endl;}
    else if(x==0 && y!=0){
        cout<<"The point lies on the Y-axis"<<endl;}
    else if(y==0 && x!=0){
        cout<<"The point lies on the X-axis"<<endl;}
    else{
        cout<<"The point is at the origin"<<endl;}
    return 0;
}