
class Solution{
    public:
    int min_sprinklers(int gallery[], int n)
    {
        vector<int> dp(n,-1);
        int left,right;
        for (int i = 0; i < n; i++) 
        {
            if(gallery[i] != -1)
            {
                right = min(i + gallery[i], n-1);
                left = max(i - gallery[i], 0);
                dp[left] = max(dp[left], right);
            }
        }
        right = dp[0];
        int nxtidx=-1,ans = 1;
        for (int i = 0; i < n; i++)
        {
            nxtidx = max(nxtidx,dp[i]);
            if(i > right && nxtidx <= i-1)
            {
                return -1;
            }
            if (i == right + 1)
            {
                right = nxtidx;
                ans++;
            }
        }
        return ans;
    }
};
