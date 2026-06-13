// Q49 Write a program to Input and display array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of arrays:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Elements of array are: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}