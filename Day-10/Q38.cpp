// Q38 Write a program to Print reverse pyramid.
// *********
//  *******
//   *****
//    ***
//     *
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of lines:";
    cin>>n;
    if(n<=0){
        cout<<"Enter the positive number";
        return 0;
    }
    for(int i=1;i<=n;i++){
        for(int j=2;j<=i;j++){
            cout<<" ";
        }
        for(int k=2*n-i;k>=i;k--){
            cout<<"*";
        }
        cout<<endl;
    }
}