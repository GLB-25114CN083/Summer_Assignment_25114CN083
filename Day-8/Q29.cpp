// Write a program to Print half pyramid pattern
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of lines:";
    cin>>n;
    if(n<=0){
        cout<<"Enter a valid number";
        return 0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}