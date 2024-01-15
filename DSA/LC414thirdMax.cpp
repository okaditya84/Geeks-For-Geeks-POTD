#include <vector>
#include <set>
#include <algorithm>

class Solution {
public:
    int thirdMax(std::vector<int>& nums) {
        std::set<int> mySet(nums.begin(), nums.end());
        std::vector<int> uniqueNums(mySet.begin(), mySet.end());

        std::sort(uniqueNums.rbegin(), uniqueNums.rend()); // Sorting in descending order

        if (uniqueNums.size() <= 2) {
            return uniqueNums[0];
        } else {
            return uniqueNums[2];
        }
    }
};
