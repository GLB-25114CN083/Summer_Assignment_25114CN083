// Q60 Write a program to Move zeroes to end.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}