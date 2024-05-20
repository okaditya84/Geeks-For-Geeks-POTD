class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        // Complete the function
        int minDiff=INT_MAX;
        for (int i=0;i<n;i++){
            if (abs(arr[i]-k)<minDiff){
                minDiff=abs(arr[i]-k);
            }

        }
        return minDiff;
    } 
};