// Write a program to Check whether a number is prime.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    if(n<=1){
        cout<<n<<" is neither a composite nor prime";
        return 0;
    }
    int flag=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag==0){
        cout<<n<<" is a composite number";
    }
    else{
        cout<<n<<" is a prime number";
    }
}