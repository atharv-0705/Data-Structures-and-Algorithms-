#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter rows & cols: ";
    cin>>m>>n;
    for(int i=1; i<=m; i++){  // rows
        for(int j=1; j<=n; j++){  // cols
            cout<<"* ";
        }
        cout<<endl;
    }
   
}