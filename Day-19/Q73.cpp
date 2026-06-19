// Q73. Write a program to Add matrices.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number of rows:";
    cin>>m;
    cout<<"Enter the number of columns:";
    cin>>n;
    vector<vector<int>> m1(m,vector<int>(n));
    cout<<"Enter the elements of first matrix:\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>m1[i][j];
        }
    }
    vector<vector<int>> m2(m,vector<int>(n));
    cout<<"Enter the elements of second matrix:\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>m2[i][j];
        }
    }
    vector<vector<int>> add(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            add[i][j]=(m1[i][j]+m2[i][j]);
        }
    }
    cout<<"\nADDITION OF  MATRIX IS :"<<" \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<add[i][j]<<" ";
        }
        cout<<endl;
    }
}