// Q96. Write a program to Remove duplicate characters.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string:";
    getline(cin,s);
    string temp="";
    for(int i=0;i<s.length();i++){
        bool found=false;
        for(int j=0;j<i;j++){
            if(s[i]==s[j]){
                found =true;
            }
        }
        if(!found){
            temp+=s[i];

        }
    }
    for(int j=0;j<temp.length();j++){
        cout<<temp[j];
    }
}