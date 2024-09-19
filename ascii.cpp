//to check whether a character is integer, capital letter or small Letter
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character"<<endl;
    cin>>ch;
    int n=ch;
    if(n>=65 && n<=90){
        cout<<"n is capital"<<endl;
    }
    
    else if(n>=97 && n<=122){
        cout<<"n is Smaller"<<endl;
    }
    else{
        cout<<"n is integer"<<endl;
    }
    return 0;
}