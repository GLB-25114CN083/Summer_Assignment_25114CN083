// Q58.Write a program to Rotate array left.
#include<iostream>
using namespace std;
void revPart(int a[],int st,int ed){
    int i=st,j=ed;
    while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
}
int main(){
    int n;
    cout<<"Enter the number of elements :";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cout<<"Enter the number of rotations:";
    cin>>x;
    revPart(a,0,x-1);
    revPart(a,x,n-1);
    revPart(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}