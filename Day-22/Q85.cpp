// Q85. Write a program to Check palindrome string
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string:";
    getline(cin,s);
    int i=0,j=s.length()-1;
    bool cp=true;
    while(i<j){
        if(s[i]!=s[j]){
            cp=false;
            break;
        }
        i++;
        j--;
    }
    if(cp){
        cout<<"Palindrome string";
    }
    else cout<<"Not a Palindrome string";
}