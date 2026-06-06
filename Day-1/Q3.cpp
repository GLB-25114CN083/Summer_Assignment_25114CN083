#include<iostream>
using namespace std;
int main(){
    int n,pro=1;
    cout<<"enter the number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        pro=pro*i;
    }
    cout<<"factorial of given number :"<<pro;
}