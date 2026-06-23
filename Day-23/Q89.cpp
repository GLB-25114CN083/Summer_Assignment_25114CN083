// Q89. Write a program to Find first non-repeating character.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string:";
    getline(cin,s);
    bool found=false;
    for(int i=0;i<s.length();i++){
        int count=0;
        for(int j=0;j<s.length();j++){
            if(s[i]==s[j]){
                count++;
            }
        }
        if(count==1){
            cout<<s[i]<<" ";
            found=true;
            break;
        }
    }
    if(!found){
        cout<<"There is no non-repeating letters";
    }
}
