// Q88. Write a program to Remove spaces from string.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string:";
    getline(cin,s);
    string t;
    for(int i=0;i<s.length();i++){
        if(s[i]!=' '){ 
            t.push_back(s[i]);  
        }
    }
    cout<<t;
}