// Q51 Write a program to Find largest and smallest element.
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of arrays :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int lgst=INT_MIN;
    for(int i=0;i<n;i++){
        if(lgst<=arr[i])  lgst=arr[i];
    }
    cout<<"maximum element is "<<lgst;
    int sml=INT_MAX;
    for(int i=0;i<n;i++){
        if(sml>arr[i])  sml=arr[i];
    }
    cout<<"\nminimum element is "<<sml;
}