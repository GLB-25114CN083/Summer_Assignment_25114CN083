// Q78. Write a program to Check symmetric matrix
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number of rows:";
    cin>>m;
    cout<<"Enter the number of columns:";
    cin>>n;
    if(m!=n){
        cout<<"Enter a square matrix:";
        return 0;
    }
    vector<vector<int>> arr(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i][j]!=arr[j][i]){
                cout<<"Not a symmetric matrix";
                return 0;
            }
        }
    }
    cout<<"symmetric matrix";
}