// Q64. Write a program to Remove duplicates from array.
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
    for(int i=0;i<a.size();i++){
        for(int j=i+1;j<a.size();j++){
            if(a[i]==a[j] && i!=j){
                a.erase(a.begin() + j);
                j--;

            }
        }
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }

}