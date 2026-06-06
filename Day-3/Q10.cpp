// Write a program to Print prime numbers in a range.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the starting number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    if(a>=b){
        cout<<"Enter a valid range";
        return 0;
    }
    for(int i=a;i<=b;i++){
        if(i<=1) continue;
        int flag=1;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag==1){
            cout<<i<<",";
        }
    }
}