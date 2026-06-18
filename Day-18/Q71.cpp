// Q71. Write a program to Binary search
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // to sort array
    for(int i=0;i<n-1;i++){
         int mi= i;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[mi]) {
                mi = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[mi];
        arr[mi] = temp;
    }
    int x;
    cout<<"Enter the target element to search";
    cin>>x;
    int low = 0;
    int high = n - 1;
    int found = -1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == x) {
            found = mid;
            break;
        }
        else if(arr[mid] <x) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if(found != -1) {
        cout << "Element found at index " << found;
    }
    else {
        cout << "Element not found";
    }

}