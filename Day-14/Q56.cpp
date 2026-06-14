// Q56 Write a program to Find duplicates in array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        bool pb = false;
        for(int k = 0; k < i; k++) {
            if(arr[k] == arr[i]) {
                pb = true;
                break;
            }
        }
        if(count >1 && pb!=true)  cout<<arr[i]<<" ";
    }
    
}