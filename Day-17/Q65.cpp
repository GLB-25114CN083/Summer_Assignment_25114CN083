//Q65. Write a program to Merge arrays.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the numberof elements of first array:";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of first array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cout<<"Enter the number elements of second array:";
    cin>>m;
    int b[m];
    cout<<"Enter the elements of second array:";
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int merge[m+n];
    for(int i=0;i<m+n;i++){
        if(i<n)  merge[i]=a[i];
        else  merge[i]=b[i-n];
    }
    for(int i=0;i<m+n;i++){
        cout<<merge[i]<<" ";
    }

}