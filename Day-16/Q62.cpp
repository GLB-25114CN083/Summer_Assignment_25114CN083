// Q62 Write a program to Find maximum frequency element
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int a[n];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int countm=0;
    int me=a[0];
    for(int i=0;i<n;i++){
        int count=0;
            for(int j=0;j<n;j++){
                if(a[i]==a[j])  count++;
            }
        if(count>countm){
                    countm=count;
                    me=a[i];
        }
    }
    cout<<me;
    cout<<"\nFrequency:"<<countm;
}