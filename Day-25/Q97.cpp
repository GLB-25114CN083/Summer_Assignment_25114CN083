// Q97. Write a program to Merge two sorted arrays.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number of elments of first array:";
    cin>>m;
    vector<int> v1(m);
    cout<<"Enter the number of elements of second array:";
    cin>>n;
    vector<int> v2(n);
    cout<<"Enter the elments of first array:";
    for(int i=0;i<m;i++){
        cin>>v1[i];
    }
    cout<<"Enter the elments of second array:";
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }
    vector<int> merge;
    int i=0,j=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]>=v2[j]){
            merge.push_back(v2[j]);
            j++;
        }
        else{
            merge.push_back(v1[i]);
            i++;
        }
    }
    while(i<v1.size()){
        merge.push_back(v1[i]);
        i++;
    }
    while(j<v2.size()){
        merge.push_back(v2[j]);
        j++;
    }
    for(int i=0;i<merge.size();i++){
        cout<<merge[i]<<" ";
    }


}