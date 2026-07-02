// Q107. Write a program to Create salary management system.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> name={"Gautam","Tushar","Vikas","Aman","Mohit"};
    vector<int> employeeId={123,546,767,544,366};
    vector<string> depart={"HR","IT","IT","Sales","Marketing"};
    vector<int> age={19,20,22,21,25};
    vector<int> salary={50000,45000,30000,56000,60000};
    cout<<"====welcome to employee portal====\n";
    int choice=0;
    while(choice!=6){
        cout<<"\n1-search employee\n2-add employee\n3-update employee\n4-delete employee\n5-display all employee\n6-exit";
        cout<<"\nEnter your choice:";
        cin>>choice;
        int eid=-1;
        int j=-1;
        int id,ag;
        int sal=0;
        string department;
        string nam;
        if(choice==1){
            cout<<"Enter employee id:";
            cin>>eid;
            for(int i=0;i<employeeId.size();i++){
                if(employeeId[i]==eid){
                    j=i;
                    break;
                }
            }
            if(j==-1){
                cout<<"no employee found";
                continue;
            }
            int hra = 0.20 * salary[j];
            int da = 0.10 * salary[j];
            int pf = 0.12 * salary[j];
            int other = 0.20 * salary[j];
            int net=salary[j]+hra+da-pf-other;
            cout<<"\nEmployee id:"<<employeeId[j];
            cout<<"\nEmployee name:"<<name[j];
            cout<<"\nEmployee age:"<<age[j];
            cout<<"\nEmployee department:"<<depart[j];
            cout<<"\nEmplyee salary:"<<salary[j];
            cout<<"\nHouse Rent Aloowances(HRA):"<<hra;
            cout<<"\nDear Allowances(DA):"<<da;
            cout<<"\npf deduction:"<<pf;
            cout<<"\nother deduction:"<<other;
            cout<<"\nNet salary:"<<net;
        }
        else if(choice==2){
            cout<<"Enter new employee id:";
            cin>>eid;
            bool fl=false;
            for(int i=0;i<employeeId.size();i++){
                if(employeeId[i]==eid){
                    cout<<"Employee already existed";
                    fl=true;
                    break;
                }
            }
            if(fl)  continue;
            cout<<"enter new employee name:";
            cin>>nam;
            cout<<"enter new employee age:";
            cin>>ag;
            cout<<"Enter new employee department:";
            cin>>department;
            cout<<"Enter new employee salary:";
            cin>>sal;
            employeeId.push_back(eid);
            name.push_back(nam);
            age.push_back(ag);
            depart.push_back(department);
            salary.push_back(sal);
            cout<<"\nemployee added succesfully\n";

        }
        else if(choice==3){
            int uc;
            cout<<"Enter the employee id to update:";
            cin>>id;
            for(int i=0;i<employeeId.size();i++){
                if(employeeId[i]==id){
                    j=i;
                    break;
                }
            }
            if(j==-1){
                cout<<"no employee found";
                continue;
            }
            cout<<"1-update name\n2-update age:\n3-update department:\n4-update salary";
            cout<<"\nEnter choice:";
            cin>>uc;
            if(uc==1){
                cout<<"enter the new name:";
                cin>>nam;
                name[j]=nam;
                cout<<"Name updated succesfully";
            }
            else if(uc==2){
                cout<<"enter the new age:";
                cin>>ag;
                age[j]=ag;
                cout<<"\nAge updated succesfully";
            }
            else if(uc==3){
                cout<<"enter the new department:";
                cin>>department;
                depart[j]=department;
                cout<<"\nDepartment updated succesfully";
            }
            else if(uc==4){
                cout<<"enter the new salary:";
                cin>>sal;
                salary[j]=sal;
                cout<<"\nsalary updated succesfully";
            }
            else{
                cout<<"you enter an invalid choice";
            }
            
        }
        else if(choice==4){
            cout<<"Enter employee id";
            cin>>id;
            bool found=false;
            for (int i = 0; i < employeeId.size(); i++) {
                if (employeeId[i] == id) {
                    employeeId.erase(employeeId.begin() + i);
                    name.erase(name.begin() + i);
                    age.erase(age.begin() + i);
                    depart.erase(depart.begin() + i);
                    salary.erase(salary.begin() + i);
                    found=true;
                    break;
                }
            }
            if(found)  cout<<"\nemployee deleted successfully";
            else  cout<<"\nno employee found";

        }
        else if(choice==5){
            for(int i=0;i<employeeId.size();i++){
                int hra = 0.20 * salary[i];
                int da = 0.10 * salary[i];
                int pf = 0.12 * salary[i];
                int other = 0.20 * salary[i];
                int net=salary[i]+hra+da-pf-other;
                cout<<"\nEmployee Id:"<<employeeId[i];
                cout<<"\nEmployee name:"<<name[i];
                cout<<"\nEmployee age:"<<age[i];
                cout<<"\nemploye Department:"<<depart[i];
                cout<<"\nEmployee basic pay:"<<salary[i];
                cout<<"\nHouse Rent Aloowances(HRA):"<<hra;
                cout<<"\nDear Allowances(DA):"<<da;
                cout<<"\npf deduction:"<<pf;
                cout<<"\nother deduction:"<<other;
                cout<<"\nNet salary:"<<net;
                cout<<endl;
            }
        }
        else if(choice>6 || choice<0){
            cout<<"\nyou enter a invalid choice";
            continue; 
        }
    }
    if(choice==6){
        cout<<"\nThank you for using";
    }
}