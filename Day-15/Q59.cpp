// Q59.Write a program to Rotate array right.
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
    cout<<"Enter the number f elements:";
    cin>>n;
    int a[n];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cout<<"Enter the numebr of rotation :";
    cin>>x;
    revPart(a,n-x,n-1);
    revPart(a,0,n-x-1);
    revPart(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }  
}