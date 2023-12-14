#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    int max=0, count=0;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
        }
        else{
            if(count>max){
                max=count;
            }
            count=0;
        }

    }
    if(count>max){
        max=count;
    }
    cout<<"The maximum number of consecutive 1s in the array is: "<<max;

}