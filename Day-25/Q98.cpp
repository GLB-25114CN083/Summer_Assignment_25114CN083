// Q98. Write a program to Find common characters in strings.
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s1,s2;
    cout<<"Enter first string:";
    getline(cin,s1);
    cout<<"Enter second string:";
    getline(cin,s2);
    vector<int> v1(26,0);
    vector<int> v2(26,0);
    for(int i=0;i<s1.size();i++){
        v1[tolower(s1[i])-'a']++;
    }
    for(int i=0;i<s2.size();i++){
        v2[tolower(s2[i])-'a']++;
    }
    bool flag=false;
    for(int i=0;i<26;i++){
        if(v1[i]>0 && v2[i]>0){
            cout<<(char)(i+'a')<<" ";
            flag=true;
        }
    }
    if(!flag)  cout<<"no common characters";

}