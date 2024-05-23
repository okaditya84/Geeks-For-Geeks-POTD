class Solution{
public:
    int kPalindrome(string str, int n, int k)
    {
        // code here
        string s1 = str;
        reverse(s1.begin(), s1.end());
        int dp[n+1][n+1];
        for(int i=0; i<=n; i++){
            for(int j=0; j<=n; j++){
                if(i==0 || j==0){
                    dp[i][j] = 0;
                }
                else if(str[i-1] == s1[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        int lps = dp[n][n];
        return n-lps <= k;

        
    }
};