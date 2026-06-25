// Q93. Write a program to Check string rotation.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1,s2;
    cout<<"Enter a string:";
    getline(cin,s1);
    cout<<"Enter the second string:";
    getline(cin,s2);
    if(s1.length()!=s2.length()){
        cout<<"invalid length string";
        return 0;
    }
    string temp= s1+s2;
    bool found=false;
    for (int i = 0; i <= temp.length() - s2.length(); i++) {
        int j;
        for (j = 0; j < s2.length(); j++) {
            if (temp[i + j] != s2[j]) {
                break;
            }
        }

        if (j == s2.length()) {
            found = true;
            break;
        }
    }
    if(found){
        cout<<"string is rotation";
    }
    else{
        cout<<"string is not rotation";
    }
}