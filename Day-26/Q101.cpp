// Q101. Write a program to Create number guessing game.
#include<iostream>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    int secret=rand() %100 +1;
    int guess;
    int attemp=0;
    cout<<"Enter a number between 1 to 100:";
    cin>>guess;
    attemp++;
    while(secret!= guess){
        if(guess<secret){
            cout<<"too low"<<endl<<"try again\n";
        }
        else if(guess>secret){
            cout<<"too high"<<endl<<"try again\n";
        }
        cout<<"\nEnter the number again:";
        cin>>guess;
        attemp++;
    }
    cout<<"congratulations you entered the right number";
    cout<<"\nnumber of attemps:"<<attemp;

}