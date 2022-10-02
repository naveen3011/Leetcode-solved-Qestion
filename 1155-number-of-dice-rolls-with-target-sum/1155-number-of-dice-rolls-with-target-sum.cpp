class Solution {
public:
    vector<vector<int>> dp;
    int mod = 1e9 + 7;
    int util(int dice_left, int sum_left, int k)
    {
        if(dice_left < 0)
            return 0;
        if(sum_left == 0)
            return dice_left == 0;
        if(dp[dice_left][sum_left] != -1)
            return dp[dice_left][sum_left];
        int ret = 0;
        for(int l = 1; l <= k; l++)
        {
            if(sum_left >= l)
            {
                ret = (ret + util(dice_left-1,sum_left-l,k)) % mod;
            }    
        }
        return dp[dice_left][sum_left] = ret;        
    }
    int numRollsToTarget(int n, int k, int target) {
        dp.resize(n+1 , vector<int> (target+1, -1)); 
        return util(n,target,k);
    }
};