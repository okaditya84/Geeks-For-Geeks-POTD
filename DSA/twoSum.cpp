class Solution {
public:
    // bool operator()(int a, int b) const { return a > b; }
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>arr;
        for( int i = 0 ; i<nums.size() ; i++ ){
            arr.push_back(make_pair(nums[i],i));
        }
        sort(arr.begin(),arr.end());
        int s = 0 , e = nums.size()-1 ;
        while( s <= e ){
            if(arr[s].first+arr[e].first > target){
               e--;
            }
            else if(arr[s].first+arr[e].first < target){
               s++;
            }
            else{
               return {arr[s].second,arr[e].second};
            }
        }
        return {0,0};
    }
};