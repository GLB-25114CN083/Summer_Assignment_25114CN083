// Q76.Write a program to Find diagonal sum.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number of rows:";
    cin>>n;
    cout<<"Enter the number of columns:";
    cin>>m;
    if(m!=n){
        cout<<"Enter a square matrix";
        return 0;
    }
    vector<vector<int>> v(m,vector<int>(n));
    cout<<"Enter the elements of vector:";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<m;i++){
        sum+=v[i][i];
        sum+=v[i][n-i-1];
    }
    if(n%2!=0){
            sum-=v[n/2][n/2];
        }
    cout<<sum;
}