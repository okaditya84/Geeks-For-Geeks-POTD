#include <bits/stdc++.h>
using namespace std;

int main(){
    //generate all the subarrays of an array and store them in a vector
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<vector<int>> subarrays;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            vector<int> subarray;
            for(int k=i;k<=j;k++){
                subarray.push_back(arr[k]);
            }
            subarrays.push_back(subarray);
        }
    }
    for(auto v:subarrays){
        for(auto i:v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}