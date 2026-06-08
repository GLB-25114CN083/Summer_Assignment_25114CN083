// Q21 Write a program to Convert decimal to binary.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    if(n<0){
        cout<<"Enter a positive number";
        return 0;
    }
    if(n==0){
        cout<<0;
        return 0;
    }
    string binary = "";
    while(n > 0) {
        binary = char('0' + (n % 2)) + binary;
        n /= 2;
    }

    cout << binary;
}