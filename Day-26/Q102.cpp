// Q102. Write a program to Create voting eligibility system.
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int age;
    cout<<"Enter age:";
    cin>>age;
    if(age<18){
        cout<<"not eligible\nminor";
        return 0;
    }
    string citizenship;
    cout<<"Are you an Indian citizen(yes-y/no-n):";
    cin>>citizenship;
    if(citizenship=="n"||citizenship=="N"){
        cout<<"not eligible\n";
        cout<<"must be the citizen of India";
        return 0;
    }
    string cr;  //criminal record;
    cout<<"criminal records status(yes-y/no-n):";
    cin>>cr;
    if(cr=="y"||cr=="Y"){
        cout<<"Not elgible\n";
        cout<<"do not have any criminal record";
        return 0;
    }
    string mc;   // mental competment
    cout<<"Is Mental competancy(yes-y/no-n):";
    cin>>mc;
    if(mc=="n" || mc=="N"){
        cout<<"Not eligible\n";
        cout<<"must be mentally competent";
        return 0;
    }
    cout<<"Eligible for voting";
    


}