
class Solution:
    def palindromicPartition(self, string):
        n = len(string)
        dp = [[False] * n for _ in range(n)]
        cuts = [0] * n
        
        for i in range(n):
            dp[i][i] = True
        
        for l in range(2, n+1):
            for i in range(n-l+1):
                j = i + l - 1
                if l == 2:
                    dp[i][j] = (string[i] == string[j])
                else:
                    dp[i][j] = (string[i] == string[j]) and dp[i+1][j-1]
        
        for i in range(n):
            if dp[0][i]:
                cuts[i] = 0
            else:
                cuts[i] = float('inf')
                for j in range(i):
                    if dp[j+1][i]:
                        cuts[i] = min(cuts[i], cuts[j] + 1)
        
        return cuts[n-1]
   