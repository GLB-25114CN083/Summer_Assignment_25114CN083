// Q26 Write a program to Recursive Fibonacci
#include<iostream>
using namespace std;
int fib(int n){
    if(n==0|| n==1){
        return n;
    }
    return fib(n-1)+ fib(n-2);
}
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    if(n<0){
        cout<<"Enter a positive number";
        return 0;
    }
    cout<<"fibonacci term is "<<fib(n);
}