// Q55 Write a program to Second largest element.
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    if(n < 2){
    cout<<"No second largest number";
    return 0;
    }
    int arr[n];
    cout<<"Enter the elements of arrays:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>maxi)  maxi=arr[i];
    }
    int s=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>s && arr[i]!=maxi)  s=arr[i];
    }
    if(s==INT_MIN)  cout<<"No second largest number";
    else  cout<<"second largest element "<<s;
    
}