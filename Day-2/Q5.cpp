#include<iostream>
using namespace std;
int main(){
    int n,sum=0,temp;
    cout<<"Enter the number:";
    cin>>n;
    while(n>0){
        temp=n%10;
        sum=sum+temp;
        n=n/10;

    }
    cout<<"sum of digits:"<<sum;
}