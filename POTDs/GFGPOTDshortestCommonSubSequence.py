class Solution:
    
    #Function to find length of shortest common supersequence of two strings.
    def shortestCommonSupersequence(self, X, Y, m, n):
        
        #creating a 2D table to store the lengths of shortest common supersequences
        dp = [[0 for j in range(n+1)] for i in range(m+1)]
        
        #filling the table in a bottom-up manner
        for i in range(m+1):
            for j in range(n+1):
                if i == 0:
                    dp[i][j] = j
                elif j == 0:
                    dp[i][j] = i
                elif X[i-1] == Y[j-1]:
                    dp[i][j] = 1 + dp[i-1][j-1]
                else:
                    dp[i][j] = 1 + min(dp[i-1][j], dp[i][j-1])
        
        #returning the length of the shortest common supersequence
        return dp[m][n]
