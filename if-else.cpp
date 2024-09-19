// to check wheter a number is positive negative or zero

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    if(n>0){
        cout<<"N is positive "<<endl;
    }
    else if(n==0){
        cout<<"N is zero "<<endl;
    }
    else{
        cout<<"N is negative"<<endl;
    }
    return 0;
}