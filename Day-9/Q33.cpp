// Q33 Write a program to Print reverse star pattern.
// *****
// ****
// ***
// **
// *
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
        for(int j=n;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}