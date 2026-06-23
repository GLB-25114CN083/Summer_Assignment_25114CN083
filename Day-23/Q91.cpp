// Q91. Write a program to Check anagram strings.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s1,s2;
    cout<<"Enter the first string:";
    getline(cin,s1);
    cout<<"Enter the second string:";
    getline(cin,s2);
    if(s1.length()!=s2.length()){
        cout<<"not anagram strings";
        return 0;
    }
    for(int i=0;i<s1.length();i++){
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==(s2)){
        cout<<"Anagram strings";
    }
    else cout<<"not anagram strings";

}