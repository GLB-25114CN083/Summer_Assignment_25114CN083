// Q99. Write a program to Sort names alphabetically.
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string:";
    getline(cin,s);
    vector<string> v;
    string str="";
    for(int i=0;i<s.length();i++){

        if(s[i]==' '){
            v.push_back(str);
            str="";
        }
        else{
            str+=s[i];
        }
    }
    // last word
    v.push_back(str);
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}