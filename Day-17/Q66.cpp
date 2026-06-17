// Q66. Write a program to Union of arrays.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    vector<int> a(n);
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cout<<"Enter the number of elements in second array:";
    cin>>m;
    vector<int> b(m);
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    vector<int> u;
    for(int i=0;i<n;i++){
       bool f=false;
       for(int j=0;j<u.size();j++){
        if(a[i]==u[j]){
            f=true;
            break;
        }
       }
       if(!f)  u.push_back(a[i]);
    }
    for(int i=0;i<m;i++){
        bool found=false;
        for(int j=0;j<u.size();j++){
            if(b[i]==u[j]){
                found=true;
                break;
            }
        }
        if(!found)  u.push_back(b[i]);
    }
    for(int i=0;i<u.size();i++){
        cout<<u[i]<<" ";
    }
}