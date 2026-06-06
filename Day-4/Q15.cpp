#include<iostream>
using namespace std;
// making a function of power
int power(int base, int exponent){
    int r=1;
    for(int i = 1; i <= exponent; i++){
        r=r*base;
    }
    return r;
}
int main(){
    int n,sum=0,count=0;
    cout<<"Enter the number:";
    cin>>n;
    if(n==0){
        cout<<n<<" is armstrong number";
        return 0;
    }
    int p=n,s=n;
   while(p>0){
   count=count+1;
    p=p/10;
   }
   while(n>0){
    sum=sum+power(n%10,count);
    n=n/10;
   }
   if(sum==s){
    cout<<s<<" is a armstrong number";
   }
   else{
    cout<<s<<" is not a armstrong number";
   }
   
}