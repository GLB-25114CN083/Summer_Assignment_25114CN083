// Q24 Write a program to Find x^n without pow().
#include<iostream>
using namespace std;
int main(){
    int x,n,p=1;
    cout<<"Enter the number:";
    cin>>x;
    cout<<"Enter the power:";
    cin>>n;
    if(n<0){
        cout<<"Enter a positive number";
        return 0;
    }
    for(int i=1;i<=n;i++){
        p*=x;
    }
    cout<<"power of "<<x<<" to "<<n<<" is "<<p;
}