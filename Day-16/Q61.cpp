// Q61. Write a program to Find missing number in array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int a[n];
    cout<<"Enter the elmenets of array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int es=(n+1)*(n+2)/2;
    int as=0;
    for(int i=0;i<n;i++){
        as+=a[i];
    }
    cout<<"MISSING NUMBER:"<<es-as;

}