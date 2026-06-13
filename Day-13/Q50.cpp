//Q50 Write a program to Find sum and average of array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"Sum of elements of array is "<<sum;
    float avg=(float)sum/n;
    cout<<"\nAverage of the array is "<<avg;

}