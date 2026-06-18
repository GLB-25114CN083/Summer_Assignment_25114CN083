// Q70. Write a program to Selection sort.
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
    for(int i=0;i<n-1;i++){
         int mi= i;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[mi]) {
                mi = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[mi];
        arr[mi] = temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}