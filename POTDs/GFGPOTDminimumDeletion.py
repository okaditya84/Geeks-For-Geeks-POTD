class Solution:
    def minimumNumberOfDeletions(self,S):
        # code here 
        #minimum number of characters to be deleted to make the sytring a palindrome
        n = len(S)
        dp = [[0 for i in range(n+1)] for j in range(n+1)]
        for i in range(n):
            for j in range(n):
                if S[i] == S[n-1-j]:
                    dp[i+1][j+1] = 1 + dp[i][j]
                else:
                    dp[i+1][j+1] = max(dp[i][j+1],dp[i+1][j])
        return n - dp[n][n]
        