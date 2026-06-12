// Q46. Write a program to Write function for Armstrong.
#include<iostream>
#include<cmath>
using namespace std;
string arm(int n){
    int a=0;
    int p=n,c=0,k=n;
    while(k>0){
        c++;
        k=k/10;
    }
    int power;
    while(p>0){
        power=round(pow(p%10,c));
        a=a+power;
        p=p/10;
    }
    if(a==n){
         return "armstrong number";
    }
    else  return "not a armstrong number";
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<arm(n);
}