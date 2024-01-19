
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        if(nums[0]>nums[1]) return 0;
        if(nums[n-1]>nums[n-2]) return n-1;
        int l=1,h=n-2;
        while(h>=l){
            int mid=l+(h-l)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) return mid;
            if(nums[mid-1]>nums[mid])h=mid-1;
            else l=mid+1;
        }
        return -1;
    }
};
#include <iostream>
#include <vector>

// Place the Solution class code here

int main() {
    // Create a vector of integers
    std::vector<int> nums = {1, 2, 3, 1};

    // Create an instance of the Solution class
    Solution solution;

    // Call the findPeakElement function and store the result
    int peakIndex = solution.findPeakElement(nums);

    // Print the peak index
    std::cout << "Peak index: " << peakIndex << std::endl;

    return 0;
}
