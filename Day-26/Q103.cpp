// Q103. Write a program to Create ATM simulation
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> last={1234,5678,4546,4556};
    vector<int> pin={1234,1111,2222,3333};
    vector<int> balance={10000,12000,30000,50000};
    vector<string> name={"Gautam","Tushar","Vikas","Guru"};
    int n=0,ld;
    cout<<"Enter the last fours digit of your card:";
    cin>>ld;
    int id=0,amount=0;
    for(int i=0;i<last.size();i++){
        if(last[i]==ld){
            id=i;
            break;
        }
        else if(i==3){
            cout<<"enter the valid card details";
            return 0;
        }
    }
    int pw=0,i=0;
    while(i<3){
        cout<<"\nenter your pin:";
        cin>>pw;
        if(pw!=pin[id]){
            cout<<"wrong pin\n";
            cout<<"attempts left:"<<2-i;
            i++;
        }
        if(pw==pin[id]){
            break;
        }
        if(i==3){
            cout<<"\nyour card is block for 24 hours";
            return 0;
        }
    }
    cout<<"\n======welcome "<<name[id]<<"======";
    while(n!=4){
        cout<<"\n======main menu======\n";
        cout<<"withdrawl-1\ndeposit-2\nbalance inquiry-3\nexit-4\n";
        cout<<"Enter your choice:";
        cin>>n;
        if(n==1){
            cout<<"enter the amount to withdraw:";
            cin>>amount;
            if(amount>balance[id]){
                cout<<"insufficient balacnce";
                break;
            }
            if(amount<0){
                cout<<"\ninvalid amount";
                continue;
            }
            cout<<"transaction succesfull";
            balance[id]-=amount;
            cout<<"\ncurrent balance:"<<balance[id];
            amount=0;
        }
        else if(n==2){
            cout<<"<<enter the amount to deposit:";
            cin>>amount;
            if(amount<0){
                cout<<"\nInvalid amount";
                continue;
            }
            cout<<"transaction succesfull";
            balance[id]+=amount;
            cout<<"\ncurrent balance:";
            amount=0;
        }
        else if(n==3){
            cout<<"transaction succesfull";
            cout<<"\ncurrent balance:"<<balance[id];
        }
        else if(n>4 || n<=0){
            cout<<"\nyou enter a invalid choice";
            continue;
        }
    }
    if(n==4){
        cout<<"\nThanku "<<name[id]<<" for using our services";
        cout<<"\nPlease visit again";
    }
}