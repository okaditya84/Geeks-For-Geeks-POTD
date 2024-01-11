class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        
        // Base case: If the input vector is empty, there are no consecutive elements.
        if (n == 0) {
            return 0;
        }

        // Step 1: Sort the input vector in ascending order.
        sort(nums.begin(), nums.end());

        int cnt = 1;    // Initialize a counter for the current consecutive sequence length.
        int maxi = 0;   // Initialize a variable to store the maximum consecutive sequence length.

        // Step 2: Iterate through the sorted vector.
        for (int i = 1; i < n; i++) {
            // Step 3: Check if the current element is different from the previous one.
            if (nums[i] != nums[i - 1]) {
                // Step 4: If the current element is consecutive to the previous one, increment the counter.
                if (nums[i] == nums[i - 1] + 1) {
                    cnt++;
                } else {
                    // Step 5: If the current element is not consecutive, update 'maxi' and reset 'cnt'.
                    maxi = max(maxi, cnt);
                    cnt = 1;
                }
            }
        }

        // Step 6: Return the maximum of 'maxi' and 'cnt' as the result.
        return max(maxi, cnt);
    }
};