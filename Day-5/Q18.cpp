#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter a number:";
    cin>>n;
    if(n<=0){
        cout<<"Enter a valid number";
        return 0;
    }
    int s=n;
    while(n>0){
        int pro=1;
        int p=n%10;
        for(int i=1;i<=p;i++){
            pro=pro*i;
        }
        n=n/10;
        sum=sum+pro;
    }
    if(sum==s){
        cout<<s<<" is a strong number";
    }
    else{
        cout<<s<<" is not a strong number";
    }
}