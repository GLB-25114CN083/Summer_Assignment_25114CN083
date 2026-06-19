// Q75. Write a program to Transpose matrix.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number of rows:";
    cin>>m;
    cout<<"Enter the number of columns";
    cin>>n;
    vector<vector<int>> v(m,vector<int>(n));
    cout<<"Enter the elements :\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    vector<vector<int>> t(n,vector<int>(m));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            t[j][i]=v[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}
