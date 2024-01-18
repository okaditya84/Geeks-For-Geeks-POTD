#include <bits/stdc++.h>
int findKRotation(vector<int> &arr){
    // Write your code here.    
    int low = 0, high = arr.size() - 1;
    int ans = INT_MAX; // Initialize with an invalid index
    int idx=0;
    while (low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid]<ans){
            ans=arr[mid];
            idx=mid;
        }
        if (arr[mid] <= arr[high]) {
            high=mid-1;
        } else {
            low = mid + 1;
        }
    }

    return idx;


}