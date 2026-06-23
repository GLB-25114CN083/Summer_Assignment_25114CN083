// Q90. Write a program to Find first repeating character
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string:";
    getline(cin,s);
    vector<int> v(26,0);
    bool found=false;
    for(int i=0;i<s.length();i++){
        char ch=s[i]-'a';
        v[ch]++;
        
        if(v[ch]>1){
            cout<<"First repeating character :"<<s[i];
            found =true;
            break;
        }
    }
    if(!found){
        cout<<"no repeating letters";
    }
}