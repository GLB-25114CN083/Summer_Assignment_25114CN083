#include<iostream>
using namespace std;
int main(){
    int n,temp,pro=1;
    cout<<"Enter the number: ";
    cin>>n;
    while(n>0){
        temp=n%10;
        pro=pro*temp;
        n=n/10;
    }
    cout<<"Products of digits :"<<pro;
}