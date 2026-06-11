// Q44. Write a program to Write function to find factorial.
#include<iostream>
using namespace std;
long long fact(int n){
    long long fac=1;
    for(int i=2;i<=n;i++){
        fac*=i;
    }
    return fac;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n<0){
        cout<<"Enter a valid number";
        return 0;
    }
    cout<<"Factorial of "<<n<<" is "<<fact(n);

}