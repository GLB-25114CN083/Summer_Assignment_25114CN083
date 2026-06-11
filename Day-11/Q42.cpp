// Q42 Write a program to Write function to find maximum.
#include<iostream>
using namespace std;
int maxi(int a,int b){
    if(a>b)  return a;
    else  return b;
}
int main(){
    int a,b;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number :";
    cin>>b;
    cout<<"Maximum of "<<a<<" & "<<b<<" is "<<maxi(a,b);

}