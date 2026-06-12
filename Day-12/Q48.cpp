// Q48 Write a program to Write function for perfect number.
#include<iostream>
using namespace std;
string perfect(int n){
    int sum=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0)  sum=sum+i;
    }
    if(sum==n)  return "perfect number";
    else  return "Not a perfect number";
}
int  main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<perfect(n);

}