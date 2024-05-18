class Solution{
public:
    int findPeakElement(vector<int>& a) 
    {
        // Code here.
        // sort(a.begin(),a.end());
        // return a[a.size()-1];
        int ma=INT_MIN;
        for(int i=0;i<n;i++) {
            ma=max(ma,a[i]);
        }
        return ma;
    }
};