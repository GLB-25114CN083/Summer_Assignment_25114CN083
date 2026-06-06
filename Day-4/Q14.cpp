// Q14 Write a program to Find nth Fibonacci term.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    if(n<=0){
        cout<<"Enter a valid number:";
        return 0;
    }
    int a=0,b=1;
    for(int i=1;i<=n;i++){
        int temp=a+b;
        a=b;
        b=temp;
    }
    cout<<"nth fibonacci  term is "<<a;
}