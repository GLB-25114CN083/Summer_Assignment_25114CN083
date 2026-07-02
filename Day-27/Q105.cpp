// Q105. Write a program to Create student record management system.
#include<iostream>
#include<vector>
using namespace std;
void addStudent(vector<string>&name,vector<int> &id,vector<int> &age,vector<string> &branch,vector<int> &semester){
    int eid,ag,sem;
    string nam;
    string bran;
    cout<<"Enter your school id:";
    cin>>eid;
    for(int i=0;i<id.size();i++){
        if(id[i]==eid){
            cout<<"student already exist";
            return;
        }
    }
    cin.ignore();
    cout<<"Enter name:";
    getline(cin,nam);
    cout<<"Enter age:";
    cin>>ag;
    if(ag<=16){
        cout<<"not eligible";
        return;
    }
    cin.ignore();
    cout<<"enter branch:";
    getline(cin,bran);
    cout<<"Enter semester:";
    cin>>sem;
    if(sem<=0 || sem>8){
        cout<<"invalid semester";
        return;
    }
    id.push_back(eid);
    name.push_back(nam);
    age.push_back(ag);
    branch.push_back(bran);
    semester.push_back(sem);
    cout<<"\nStudent added succesfully\n";

}
void displayStudent(vector<string>&name,vector<int> &id,vector<int> &age,vector<string> &branch,vector<int> &semester){
    int eid;
    int temp=-1;
    cout<<"Enter school id:";
    cin>>eid;
    for(int i=0;i<id.size();i++){
        if(id[i]==eid){
            temp=i;
            break;
        }
    }
    if(temp==-1){
        cout<<"student with this school id not found";
        return;
    }
    cout<<"\nStudent id:"<<id[temp];
    cout<<"\nStudent name:"<<name[temp];
    cout<<"\nStudent age:"<<age[temp];
    cout<<"\nStudent branch:"<<branch[temp];
    cout<<"\nStudent semester:"<<semester[temp];
}
void deleteStudent(vector<string>&name,vector<int> &id,vector<int> &age,vector<string> &branch,vector<int> &semester){
    int eid;
    int temp=-1;
    cout<<"Enter school id:";
    cin>>eid;
    for(int i=0;i<id.size();i++){
        if(id[i]==eid){
            temp=i;
            break;
        }
    }
    if(temp==-1){
        cout<<"student not found";
        return;
    }
    id.erase(id.begin() + temp);
    name.erase(name.begin() + temp);
    age.erase(age.begin() + temp);
    branch.erase(branch.begin() + temp);
    semester.erase(semester.begin() + temp);
    cout<<"\nstudent deleted succesfully";
}
void updateStudent(vector<string>&name,vector<int> &id,vector<int> &age,vector<string> &branch,vector<int> &semester){
    int eid;
    int temp=-1;
    cout<<"Enter school id:";
    cin>>eid;
    for(int i=0;i<id.size();i++){
        if(id[i]==eid){
            temp=i;
            break;
        }
    }
    if(temp==-1){
        cout<<"student not found";
        return;
    }
    int ch;
    cout<<"1-update id\n2-update name\n3-update age\n4-updte branch\n5-update semester";
    cout<<"\nEnter your choice:";
    cin>>ch;
    if(ch==1){
        int nid;
        cout<<"enter new id:";
        cin>>nid;
        bool flag=false;
        for(int i=0;i<id.size();i++){
            if(id[i]==nid){
                cout<<"school id already present";
                flag=true;
                break;
            }
        }
        if(flag) {
            return;
        }
        else{
            id[temp]=nid;
        }
    }
    else if(ch==2){
        string nname;
        cout<<"Enter the new name:";
        cin.ignore();
        getline(cin,nname);
        name[temp]=nname;
        cout<<"\nName updated succesfully";
    }
    else if(ch==3){
        int nag;
        cout<<"Enter the new age:";
        cin>>nag;
        if(nag<16){
            cout<<"Enter a valid age";
            return;
        }
        age[temp]=nag;
        cout<<"\nage updated succesfully";
    }
    else if(ch==4){
        string nb;
        cout<<"Enter the new branch:";
        cin.ignore();
        getline(cin,nb);
        branch[temp]=nb;
        cout<<"\nbranch updated succesfully";
    }
    else if(ch==5){
        int nsem;
        cout<<"Enter the new semester:";
        cin>>nsem;
        if(nsem>8 || nsem<=0){
            cout<<"Enter the valid semester";
            return;
        }
        semester[temp]=nsem;
        cout<<"\nsemester updated succesfully";
    }
}
void displayAll(vector<string>&name,vector<int> &id,vector<int> &age,vector<string> &branch,vector<int> &semester){
    cout<<"==============================\n";
    cout<<"       STUDENT RECORD";
    cout<<"\n=============================";
    for(int i=0;i<name.size();i++){
        cout<<"\nstudent id:"<<id[i];
        cout<<"\nStudent Name:"<<name[i];
        cout<<"\nStudent Age:"<<age[i];
        cout<<"\nbranch:"<<branch[i];
        cout<<"\nsemester:"<<semester[i];
        cout<<"\n-------------------------------\n";
    }
    cout<<"\n===============================\n";
    cout<<"       Total students:"<<id.size();
    cout<<"\n===============================";
}
int main(){
    vector<string> name={"Gautam","Tushar","Vikas","Aman","Ann"};;
    vector<int> id={ 123,156,197,211,267};
    vector<int> age={18,19,19,20,18};
    vector<string> branch={"CSE","IT","CSDS","CSDS","CSAI"};
    vector<int> semester={2,2,4,4,2};
    int choice=0;
    while(choice!=6){
        cout<<"\n=======STUDENT MANAGEMENT SYSTEM======";
        cout<<"\n1-Display student\n2-Add student\n3-Update student\n4-Delete student\n5-display all student\n6-exit";
        cout<<"\nEnter your choice:";
        cin>>choice;
        if(choice==1)  displayStudent(name, id, age, branch, semester);
        else if(choice==2)  addStudent(name, id, age, branch, semester);
        else if(choice==3)  updateStudent(name, id, age, branch, semester);
        else if(choice==4)  deleteStudent(name, id, age, branch, semester);
        else if(choice==5)  displayAll(name, id, age, branch, semester);
        else if(choice==6)  break;
        else{
            cout<<"invalid choice";
            continue;
        }
    }
    cout<<"\nthank you for using\n";

}