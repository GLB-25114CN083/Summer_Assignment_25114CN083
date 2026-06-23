// Q92. Write a program to Find maximum occurring character.
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string:";
    getline(cin,s);
    vector<int> v(26,0);
    for(int  i=0;i<s.length();i++){
        char ch=tolower(s[i])-'a';
        v[ch]++;
    }
    int max=0;
    int temp=0;
    for(int i=0;i<26;i++){
        if(v[i]>max){
            max=v[i];
            temp=i;
        }
    }
    cout<<(char)(temp+'a')<<" = "<<max;
}