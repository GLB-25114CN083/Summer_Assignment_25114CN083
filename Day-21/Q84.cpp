// Q84. Write a program to Convert lowercase to uppercase.
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string:";
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
        }
    }
    cout<<s;
}