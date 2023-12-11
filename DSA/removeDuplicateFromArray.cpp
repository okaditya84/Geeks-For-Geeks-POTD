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
    int temp[n];
    int j=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            temp[j++]=arr[i];
        }
    }
    temp[j++]=arr[n-1];
    for(int i=0;i<j;i++){
        arr[i]=temp[i];
    }
    for(int i=0;i<j;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}