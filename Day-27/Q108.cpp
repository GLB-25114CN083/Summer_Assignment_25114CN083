// Q108. Write a program to Create marksheet generation system.
#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    string name;
    string branch;
    int id;
    cout<<"Enter your roll number:";
    cin>>id;
    cin.ignore();
    cout<<"Enter your name:";
    getline(cin,name);
    cout<<"Enter branch:";
    getline(cin,branch);
    cout<<endl;
    int n;
    cout<<"Enter the number of subjects:";
    cin>>n;
    vector<string> sub(n);
    vector<int> marks(n);
    vector<char> grade(n);
    for(int i=0;i<sub.size();i++){
        cout<<endl;
        cout<<"Enter subject name:";
        cin>>sub[i];
        cout<<"Enter subject marks:";
        cin>>marks[i];
        if(marks[i]<0 ||marks[i]>100){
            cout<<"Enter a valid marks\n";
            i--;
            continue;
        }
        if(marks[i]<33){
            grade[i]='F';
        }
        else if(marks[i]>=90){
            grade[i]='A';
        }
        else if(marks[i]>=80){
            grade[i]='B';
        }
        else if(marks[i]>=70){
            grade[i]='C';
        }
        else if(marks[i]>=50){
            grade[i]='D';
        }
        else if(marks[i]>=33){
            grade[i]='E';
        }
    }
    int total=0;
    for(int i=0;i<marks.size();i++){
        total+=marks[i];
    }
    float perc=(float)total/n;
    cout<<"=================================================\n";
    cout<<"|                   MARKSHEET                   |\n";
    cout<<"=================================================\n";
    cout<<"Name:"<<name;
    cout<<"\nRoll number:"<<id;
    cout<<"\nBranch:"<<branch<<endl;
    cout<<"--------------------------------------------------\n";
    cout<<"subject        maximum marks obtained marks  grade\n";
    for(int i=0;i<sub.size();i++){
        cout<<sub[i];
        for(int j=0;j<(21-(int)sub[i].length());j++){
            cout<<" ";
        }
        cout<<100<<"           "<<marks[i]<<"          "<<grade[i]<<"   "<<endl;
    }
    cout<<"\n-------------------------------------------------\n";
    cout<<"Total obtained marks:"<<total;
    cout<<"\nPercentage: " << fixed << setprecision(2) << perc << "%";
    bool flag=true;
    for(int i=0;i<marks.size();i++){
        if(marks[i]<33) flag=false;
    }
    if(flag) cout<<"\nPass";
    else  cout<<"\nFail";
    cout<<"\n--------------------------------------------------\n";

}