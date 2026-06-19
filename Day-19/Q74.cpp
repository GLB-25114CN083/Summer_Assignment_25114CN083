// Q74. Write a program to Subtract matrices.
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
    vector<vector<int>> sub(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sub[i][j]=(m1[i][j]-m2[i][j]);
        }
    }
    cout<<"\nSUBTRACTION OF  MATRIX IS :"<<" \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<sub[i][j]<<" ";
        }
        cout<<endl;
    }
}
