#include <bits/stdc++.h>
using namespace std;

int second(int arr[],int size){
    int largest=arr[0];
    for (int i=0;i<size;i++){
        if (arr[i]>largest){
            largest=arr[i];
        }
    }
    int secondL=-1;
    for(int i=0;i<size;i++){
        if(arr[i]>secondL && arr[i]!=largest){
            secondL=arr[i];
        }
    }
    cout<<"the second largest element in the array is: "<<secondL;
}
int main(){
    int n; int arr[n];
    cout<<"enter the number of elements in array: ";
    cin>>n;
    cout<<"start entering the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    second(arr,n);
    return 0;
}
