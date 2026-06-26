// Q100. Write a program to Sort words by length.
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
            if(!str.empty()){
                v.push_back(str);
                str="";
            }
        }
        else{
            str+=s[i];
        }
    }
    if(!str.empty()){
            v.push_back(str);
    }
    for(int i=0;i<(int)v.size();i++){
        for(int j=0;j<(int)v.size()-i-1;j++){
            if((int)v[j].size()>(int)v[j+1].size()){
                swap(v[j],v[j+1]);
            }
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}