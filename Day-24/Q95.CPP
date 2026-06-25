// Q95. Write a program to Find longest word.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string:";
    getline(cin,s);
    int count=0;
    int max=0;
    int st=0;
    int maxst=0;
    for(int i=0;i<s.length();i++){
        if(s[i]!=' '){
            count++;
        }
        else{
            if(count>max){
                max=count;
                maxst=st;
            }
            count=0;
            st=i+1;
        }
    }
    if(count>max){
        max=count;
        maxst=st;
    }
    cout<<"Longest word is ";
    for(int i=maxst;i<maxst+max;i++){
        cout<<s[i];
    }

}