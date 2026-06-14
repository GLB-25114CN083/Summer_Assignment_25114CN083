// Q53 Write a program to Linear search.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of element:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    bool flag=false;
    cout<<"Enter the element to search:";
    cin>>x;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<"Element found at index number "<<i;
            flag=true;
            break;
        }
    }
    if(flag!=true)  cout<<"Element does not found";
}