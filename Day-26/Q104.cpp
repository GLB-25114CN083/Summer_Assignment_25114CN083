// Q104. Write a program to Create quiz application
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<string> ques={"Q1-","Q2-","Q3-","Q4-","Q5-"};
    string option="\nA- \nB- \nC- \nD-";
    vector<char> answer={'a','b','c','c','d'};
    cout<<"=====welcome to quiz=====\n";
    int i=0;
    char choice;
    int result=0;
    while(i!=5){
        cout<<endl<<ques[i];
        cout<<option;
        cout<<"\nEnter your choice:";
        cin>>choice;
        if(tolower(choice)==answer[i]){
            cout<<"Your answer is correct\n";
            result++;
            cout<<"current score:"<<result;
        }
        else{
            cout<<"your answer is incorrect\n";
            cout<<"current score:"<<result;
        }
        
        i++;    
    }
    cout<<"\nquiz is over";
    cout<<"\nyour score is:"<<result<<"/5";    


}