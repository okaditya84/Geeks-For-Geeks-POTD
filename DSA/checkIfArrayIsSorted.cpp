#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"start entering the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool flag=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]){
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag==1){
        cout<<"the array is sorted";
    }
    else{
        cout<<"the array is not sorted";
    }
}