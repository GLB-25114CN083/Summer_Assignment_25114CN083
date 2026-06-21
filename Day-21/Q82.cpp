// Q82. Write a program to Reverse a string
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string:";
    getline(cin,s);
    // in built function
    // reverse(s.begin(),s.end());
    // cout<<s;
    int i=0,j=s.length()-1;
    while(i<j){
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    cout<<s;


}