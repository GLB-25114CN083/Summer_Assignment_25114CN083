// Q43 Write a program to Write function to check prime.
#include<iostream>
using namespace std;
void prime(int n){
    int flag=1;
    if(n<0){
        cout<<"Enter a valid number";
        return;
    }
    if(n==1||n==0){
        cout<<"Neither prime nor composite number";
        return;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag==1)  cout<<"Prime number";
    else  cout<<"composite number";
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    prime(n);

}