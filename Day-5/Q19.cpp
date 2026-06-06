// Q19 Write a program to Print factors of a number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    if(n<=0){
        cout<<"Enter a positive non-zero number";
        return 0;
    }
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }

    }
}