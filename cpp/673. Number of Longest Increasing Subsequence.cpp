class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int len = nums.size(), ans = 0;
        if(len < 2)
            return len;
        vector<int> dp(len, 1);
        vector<int> count(len, 1);
        for(int i=0; i<len; i++){
            for(int j=0; j<i; j++){
                if(nums[j] < nums[i] && dp[i]<dp[j]+1){
                    dp[i] = dp[j]+1;
                    count[i] = count[j];
                }
                else if(nums[j] < nums[i] && dp[i] == dp[j]+1)
                    count[i] += count[j];
                    
            }
            ans = max(ans, dp[i]);
        }
        int res = 0;
        for(int i=0; i<len; i++){
            if(dp[i] == ans)
                res += count[i];
        }
        return res;
    }
};
