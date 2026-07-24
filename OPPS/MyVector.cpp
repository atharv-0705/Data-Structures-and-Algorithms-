#include<iostream>
//#include<vector>
using namespace std;
class Vector{
public:
    int size;
    int capacity;
    int* arr; //Points to the dynamically allocated array storing elements.
    Vector(){ //constructor
        size = 0;
        capacity = 1;
        arr = new int[1]; //arr  dynamically allocates memory for 1 integer
    }

    void add(int ele){
        if(size==capacity){
                capacity *=2;
                int* arr2 = new int[capacity];
                for(int i=0;i<size;i++){
                    arr2[i] = arr[i];
                }  
                arr = arr2;    
        }
        arr[size++] = ele;
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    int get(int idx){
            if(size==0){
            cout<<"Array is Empty"<<endl;
            return -1;
        }
        if(idx>=size || idx<0){
            cout<<"Invalid Index"<<endl;
            return -1;
                }
        return arr[idx];
    }

    void remove(){
        if(size==0){
            cout<<"Array is Empty"<<endl;
        }
        size--;
    }
};

int main(){
    Vector v;//coz of default constructor not use ();
    cout<<"size: " <<v.size<<" "<<"capacity: "<<v.capacity<<endl;
    v.add(10);                                              
    v.print();  
    v.add(15);
    cout<<"size: " <<v.size<<" "<<"capacity: "<<v.capacity<<endl;
    v.print();
    v.add(7);
    cout<<"size: " <<v.size<<" "<<"capacity: "<<v.capacity<<endl;
    v.print();
    v.add(1);
    cout<<"size: " <<v.size<<" "<<"capacity: "<<v.capacity<<endl;
    v.print();
    v.add(1);
    cout<<"size: " <<v.size<<" "<<"capacity: "<<v.capacity<<endl;
    v.add(71);
    v.print();
   cout<<"size: " <<v.size<<" "<<"capacity: "<<v.capacity<<endl;

    cout<<"value at that index is : "<<v.get(1)<<endl;

    v.remove();
    v.print();

return 0;
}
