
class Solution:
    def sumXOR (self, arr, n) : 
        #Complete the function
        ans = 0
        for i in range(n):
            for j in range(i+1, n):
                ans += arr[i] ^ arr[j]
        return ans
        