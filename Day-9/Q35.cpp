// Q35 Write a program to Print repeated character pattern.
// A
// BB
// CCC
// DDDD
// EEEEE
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of lines:";
    cin>>n;
    if(n<0){
        cout<<"Enter a positive number";
        return 0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<(char)(64+i);
        }
        cout<<endl;
    }
}