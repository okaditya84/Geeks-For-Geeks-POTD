class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        vector<int> ls;
        int min=(nums.size()/3) +1;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]]==min){
                ls.push_back(nums[i]);
            }
        }
        return ls;
    }
};