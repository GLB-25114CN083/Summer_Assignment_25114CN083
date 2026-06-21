// Q83. Write a program to Count vowels and consonants
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string:";
    getline(cin,s);
    int cv=0;
    int cc=0;
    for(int i=0;i<s.length();i++){
        char ch=tolower(s[i]);
        if(ch>='a' && ch<='z'){
            if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u'){
                cv++;
            }
            else cc++;
        }
    }
    cout<<"Total number of vowels are "<<cv<<endl;
    cout<<"Total number of consonants are "<<cc<<endl;
}