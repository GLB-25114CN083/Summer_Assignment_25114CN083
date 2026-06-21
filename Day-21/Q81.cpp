// Q81. Write a program to Find string length without strlen().
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string:";
    getline(cin,s);
    int i=0;
    while(s[i]!='\0'){
        i++;
    }
    cout<<"length of string is "<<i;

}