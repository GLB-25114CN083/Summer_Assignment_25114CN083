// Q39 Write a program to Print number pyramid.
//     1
//    121
//   12321
//  1234321
// 123454321
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of lines:";
    cin>>n;
    if(n<=0){
        cout<<"Enter a positive number ";
        return 0;
    }
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=1;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        for(int l=i-1;l>=1;l--){
            cout<<l;
        }
        cout<<endl;
    }
}