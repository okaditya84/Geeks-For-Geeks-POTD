class Solution:
    def topK(self, nums, k):
        freq = {}
        for num in nums:
            freq[num] = freq.get(num, 0) + 1
        nums.sort(key=lambda x: (-freq[x], x))
        return nums[:k]
