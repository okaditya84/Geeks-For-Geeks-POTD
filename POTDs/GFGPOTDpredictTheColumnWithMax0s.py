#User function Template for python3
def solve3(arr,n):
    ans = []
    for i in arr:
        ans.append(i[n])
    return ans
    
class Solution:
    def columnWithMaxZeros(self,arr,N):
        # code here 
        ans = []
        cnt=0
        for i in range(N):
            ans.append(solve3(arr,i).count(0))
            cnt+=solve3(arr,i).count(0)
        return -1 if cnt==0 else (ans.index(max(ans)))