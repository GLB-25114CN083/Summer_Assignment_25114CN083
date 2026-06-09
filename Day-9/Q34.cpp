// Q34 Write a program to Print reverse number triangle.
// 12345
// 1234
// 123
// 12
// 1
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
        for(int j=1;j<=n+1-i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}