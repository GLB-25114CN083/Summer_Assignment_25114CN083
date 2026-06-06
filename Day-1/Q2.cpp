#include<iostream>
using namespace std;
int main(){
    int n,product=1;
    cout<<"Enter the number:";
    cin>>n;
    for(int i=1;i<=10;i++){
        product=n*i;
        cout<<n<<"*"<<i<<"="<<product<<"\n";
    }

}