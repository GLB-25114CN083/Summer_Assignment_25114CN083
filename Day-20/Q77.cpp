// Q77. Write a program to Multiply matrices.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m1,n1;
    cout<<"Enter the number of rows:";
    cin>>m1;
    cout<<"Enter the number of columns:";
    cin>>n1;
    vector<vector<int>> a(m1,vector<int>(n1));
    cout<<"Enter the elements:\n";
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++)
        cin>>a[i][j];
    }
    int m2,n2;
    cout<<"Enter the number of rows of second matrix:";
    cin>>m2;
    cout<<"Enter the number of columns of second matrix:";
    cin>>n2;
    if(n1!=m2){
        cout<<"Enter a valide matrix";
        return 0;
    }
    vector<vector<int>> b(m2,vector<int>(n2));
    cout<<"Enter the elements of second matrix:\n";
    for(int i=0;i<m2;i++){
        for(int j=0;j<n2;j++)
        cin>>b[i][j];
    }
    vector<vector<int>> c(m1,vector<int>(n2));
    for(int i=0;i<m1;i++){
        for(int j=0;j<n2;j++){
            for(int k=0;k<n1;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    cout<<endl;
    for(int i=0;i<m1;i++){
        for(int j=0;j<n2;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}