// Q45 Write a program to Write function for palindrome.
#include<iostream>
using namespace std;
string palindrome(int n){
    int rev=0,p=n;
    while(n>0){
        rev=rev*10+n%10;
        n=n/10;
    }
    if(rev==p){
        return "palindrome";
    }
    else  return "Not palindrome";
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<palindrome(n);

}