// Q25 Write a program to Recursive factorial
#include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<"factorial of "<<n<<" is "<<fact(n);
}