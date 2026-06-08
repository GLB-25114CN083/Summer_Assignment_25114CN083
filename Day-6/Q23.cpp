// Q23 Write a program to Count set bits in a number
#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter the number:";
    cin>>n;
    if(n<0){
        cout<<"Enter a positive number";
        return 0;
    }
    while(n>0){
        if(n%2!=0){
            count+=1;
        }
        n=n/2;
    }
    cout<<"set bits count is "<<count;
}