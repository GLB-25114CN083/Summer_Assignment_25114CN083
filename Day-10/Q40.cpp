// Q40 Write a program to Print character pyramid.
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of lines:";
    cin>>n;
    if(n<=0){
        cout<<"Enter a positive number";
        return 0;
    }
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=1;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<(char)(64+k);
        }
        for(int l=i-1;l>=1;l--){
            cout<<(char)(64+l);
        }
        cout<<endl;

    }
}