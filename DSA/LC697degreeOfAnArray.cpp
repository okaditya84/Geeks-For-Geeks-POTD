class Solution {
public:
  int min(int a,int b)
  {
  if(a<b)
  return a;
  return b;
  }
    int findShortestSubArray(vector<int>& nums) 
    {
        unordered_map<int,int> mp;
        int i;
        int n=nums.size();
        
        for(i=0; i<n; i++)
        {
            mp[nums[i]]++;
        }
        
        int ma=-1;
        for(auto it : mp)
        {
            if(ma<it.second)
            {
                ma=it.second;
            }
        }
        
        vector<int> v;
        for(auto it : mp)
        {
            if(it.second==ma)
            {
                v.push_back(it.first);
            }
        }
        int m=v.size();
        int s=INT_MAX;
        for(i=0; i<m; i++)
        {
            int x=v[i];
            int j;
            int left_index;
            for(j=0; j<n; j++)
            {
                if(nums[j]==x)
                {
                    left_index=j;
                    break;
                }
            }
            int right_index;
            for(j=n-1; j>=0; j--)
            {
                if(nums[j]==x)
                {
                    right_index=j;
                break;
                }
                
            }
            s=min(right_index-left_index+1,s);
        }
        return s;
    }
};