// Q36 Write a program to Print hollow square pattern.
// *****
// *   *
// *   *
// *   *
// *****
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a positive value:";
    cin>>n;
    if(n<=0){
        cout<<"Enter a positive number";
        return 0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==n||i==1){
                cout<<"*";
            }
            else{
                if(j==1||j==n){
                    cout<<"*";
                }
                else  cout<<" ";
            }
        }
        cout<<endl;
    }
}