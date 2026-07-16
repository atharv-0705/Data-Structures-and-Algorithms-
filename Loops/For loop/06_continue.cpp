// 1 to 30 except multipleof 4 using continue statement
 #include<iostream>
 using namespace std;

 int main(){
    for(int i=1; i<=30; i++){
         if(i%4 == 0) continue;
         cout<<i<<" ";
    }
 }