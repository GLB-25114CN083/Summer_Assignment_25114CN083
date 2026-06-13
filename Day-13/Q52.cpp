#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int evenc=0,oddc=0;
    for(int i=0;i<n;i++){
        if((arr[i])%2==0)  evenc++;
        else  oddc++;
    }
    cout<<"Even count is "<<evenc;
    cout<<"\nOdd count is "<<oddc;
}