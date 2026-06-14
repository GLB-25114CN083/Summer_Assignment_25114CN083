// Q54 Write a program to Frequency of an element
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x,count=0 ;
    cout<<"Enter the element to find frequency:";
    cin>>x;
    for(int i=0;i<n;i++){
        if(arr[i]==x)  count++;
    }
    if(count==0)  cout<<"element not found:";
    else  cout<<count;

}