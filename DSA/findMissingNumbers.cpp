#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int sum=n*(n+1)/2;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
        sum-=arr[i];
    }
    cout<<sum;
}