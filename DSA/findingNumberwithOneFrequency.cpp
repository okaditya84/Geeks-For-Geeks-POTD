#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    int max=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    } 
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }

    }
    //declare a hash array of size max+1
    int hash[max+1]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    for(int i=0;i<max+1;i++){
        if(hash[i]==1){
            cout<<i;
            break;
        }
    }
    
}