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
    int d;
    cout<<"enter the number of places by which you want to rotate the array: ";
    cin>>d;
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=0;i<d;i++){
        arr[n-d+i]=temp[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;    



}