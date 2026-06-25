// Q94. Write a program to Compress a string
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string:";
    getline(cin,s);
    int count =1;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1]){
            count++;
        }
        else{
            if(count==1){
                cout<<s[i];
            }
            else{
                cout<<s[i]<<count;
                count=1;
            }
        }
    }
    if(count==1)  cout<<s[s.length()-1];
    else{
        cout<<s[s.length()-1]<<count;
    }
}