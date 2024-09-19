//to print sum of n numbers 

#include<iostream>
using namespace std;
int main(){
     int n;
     int temp=0;
     cout<<"enter the value of n ";
     cin>>n;
     int i=1;
     while(i<=n){
        temp=temp+i;
        i++;
     }
     cout<<"the sum of numbers from 1 to n is "<<temp<<endl;
     
 return 0;


}