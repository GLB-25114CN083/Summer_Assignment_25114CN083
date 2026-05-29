#include<iostream>
using namespace std;
int main(){
    int n,temp,rev=0,p;
    cout<<"Enter the number :";
    cin>>n;
    p=n;
    while(n>0){
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
    if(rev=p){
        cout<<"PALINDROME NUMBER";
    }
    else{
        cout<<"NOT A PALINDROME NUMBER:";
    }
}