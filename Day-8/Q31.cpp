// Q31 Write a program to Print character triangle.
// A
// AB
// ABC
// ABCD
// ABCDE
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number od lines:";
    cin>>n;
    if(n<=0){
        cout<<"Enter a valid number";
        return 0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<(char)(64+j);
        }
        cout<<endl;
    }
}