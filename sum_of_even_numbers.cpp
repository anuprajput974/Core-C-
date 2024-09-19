//to print sum of n even numbers 

#include<iostream>
using namespace std;
int main(){
     int n;
     int temp=0;
     cout<<"enter the value of n ";
     cin>>n;
     int i=0;
     while(i<=n){
        temp=temp+i;
        i=i+2;
     }
     cout<<"the sum of numbers from 1 to n is "<<temp<<endl;
     
 return 0;


}