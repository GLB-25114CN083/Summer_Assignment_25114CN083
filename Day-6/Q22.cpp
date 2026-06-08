// Q22 Write a program to Convert binary to decimal
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,p=0,t=0;
    cout<<"Enter the number :";
    cin>>n;
    if(n<0){
        cout<<"Enter a positive number";
        return 0;
    }
    int temp=n;
    while(temp>0){
        if(temp%10!=0 && temp%10!=1){
            cout<<"invalid number";
            return 0;
        }
        temp=temp/10;
    }
    while(n>0){
        p+=(n%10)*pow(2,t);
        t++;
        n=n/10;
    }
    cout<<p;

}