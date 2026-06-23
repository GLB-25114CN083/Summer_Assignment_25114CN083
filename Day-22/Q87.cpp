// Q87. Write a program to Character frequency.
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string:";
    getline(cin,s);
    vector<int> v(26,0);
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            char ch=tolower(s[i]);
            v[ch-97]++;
        }
    }
    for(int i=0;i<26;i++){
        if(v[i]>=1){
            cout<<(char)(i+97)<<" = "<<v[i]<<endl;
        }
    }

}