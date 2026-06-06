// Write a program to Find GCD of two numbers
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first number :";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    if(a<=0||b<=0){
        cout<<"Enter a positive value";
        return 0;
    }
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    cout<<"GCD is "<<a;

}