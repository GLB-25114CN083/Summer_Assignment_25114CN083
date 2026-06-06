#include<iostream>
using namespace std;
int main(){
    int n,rev=0,temp;
    cout<<"Enter the number";
    cin>>n;
    while(n>0){
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
    cout<<"reverse of a number:"<<rev;
}