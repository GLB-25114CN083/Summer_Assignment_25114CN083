// Q86. Write a program to Count words in a sentence
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string:";
    getline(cin,s);
    int words=0;
    for(int i=0;i<s.length();i++){
        if(s[i]!=' ' && (i==0 || s[i-1]==' ')){
            words++;
        }
    }
    cout<<"Total number of words in the given sentence is: "<<words; 
}