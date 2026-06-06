// Q16 Write a program to Print Armstrong numbers in a range.
#include<iostream>
using namespace std;
int power(int base, int exp){
    int r = 1;
    for(int i = 1; i <= exp; i++){
        r = r * base;
    }
    return r;
}
int main(){
    int a,b;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    if(a<0 || b<0 || a>b){
        cout<<"Enter the valid numbers:";
        return 0;
    }
    for(int i=a;i<=b;i++){
        if(i==0){
            cout<<0<<" ";
            continue;
        }
        int p=i,s=i,count=0,sum=0;
        while(p>0){
            count+=1;
            p=p/10;
        }
        while(s>0){
            sum=sum + power(s%10,count);
            s=s/10;
        }
        if(sum==i){
            cout<<i<<" ";
        }
    }
}