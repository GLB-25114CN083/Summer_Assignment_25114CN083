// Q67.Write a program to Intersection of arrays.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number of elements in first array:";
    cin>>n;
    cout<<"Enter the number of elements in second array:";
    cin>>m;
    cout<<"Enter the elements of first array:";
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the elements of second array:";
    vector<int> b(m);
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    vector<int> is;
    for(int i=0;i<n;i++){
        bool pb=false;
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                pb=true;
            }
        }
        if(pb){
            bool ap=false;
            for(int k=0;k<is.size();k++){
                if(a[i]==is[k]){
                    ap=true;
                }
            }
            if(!ap){
                is.push_back(a[i]);
            }
        }
    }
    for(int i=0;i<is.size();i++){
        cout<<is[i]<<" ";
    }
}