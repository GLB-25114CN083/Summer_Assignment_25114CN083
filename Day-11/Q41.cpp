// Q41 Write a program to Write function to find sum of two numbers.
#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    cout<<"sum of "<<a<<" & "<<b<<" is "<<sum(a,b);
}