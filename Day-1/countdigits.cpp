#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the number :";
    cin>>n;
    while(n>0){
        n=n/10;
        sum=sum+1;
    }
    cout<<"count of digits:"<<sum;
}