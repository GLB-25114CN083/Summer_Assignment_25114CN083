// Q1 Write a program to Calculate sum of first N natural numbers
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"sum up to the nth digit:"<<sum;
}
