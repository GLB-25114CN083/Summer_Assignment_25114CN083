// Q17 Write a program to Check perfect number.
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter a number :";
    cin>>n;
    if(n<=1){
        cout<<"Enter a number greater then 1";
        return 0;
    }
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        cout<<n<<" is a perfect number";
    }
    else  cout<<n<<" is not a perfect number";
}