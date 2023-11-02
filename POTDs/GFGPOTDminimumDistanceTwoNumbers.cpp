class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        if(x == y) return -1;
        int ans = n;
        int p = -1, q = -1;
        for(int i=0; i<n; i++) {
            if(a[i] == x) {
                if(q != -1) ans = min(ans, abs(i-q));
                p = i;
            } else if(a[i] == y) {
                if(p != -1) ans = min(ans, abs(i-p));
                q = i;
            }
        }
        if(ans == n) return -1;
        return ans;
    }
};