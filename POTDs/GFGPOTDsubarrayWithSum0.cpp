class Solution:
    
    #Function to check whether there is a subarray present with 0-sum or not.
    def subArrayExists(self,arr,n):
        sum = 0
        s = set()
        for i in range(n):
            sum += arr[i]
            if sum == 0 or sum in s:
                return True
            s.add(sum)
        return False 

