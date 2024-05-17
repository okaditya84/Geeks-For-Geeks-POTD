class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        // code here
        
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(abs(arr[i]-arr[j])==x)
        //             return 1;
        //     }
        // }
        // return -1;

        //sort the array
        sort(arr.begin(),arr.end());
        int left=0, right=1;
        while(left<n && right<n){
            int diff=arr[right]-arr[left];
            if(diff==x && left!=right)
                return 1;
            else if(diff<x)
                right++;
            else
                left++;
        }
        if(left==right){
            right++;
        }
        return -1;

    }
};
