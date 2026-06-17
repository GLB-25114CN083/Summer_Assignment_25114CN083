#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the number of elments in the first array:";
    cin>>n;
    cout<<"Enter the number of elements in second array:";
    cin>>m;
    vector<int> a(n);
    vector<int> b(m);
    cout<<"Enter the elements of first array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the elements of second array:";
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    vector<int> is;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                is.push_back(a[i]);
                break;
            }
        }
    }
    for(int i=0;i<is.size();i++){
        cout<<is[i]<<" ";
    }
}