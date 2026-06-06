// Write a program to Find LCM of two numbers
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    if(a<=0||b<=0){
        cout<<"Enter a valid number";
        return 0;
    }
    int x=a,y=b;
    while(y!=0){
        int temp=y;
        y=x%y;
        x=temp;
    }
    int gcd=x;
    int lcm=(a*b)/gcd;
    cout<<"LCM is "<<lcm;

}