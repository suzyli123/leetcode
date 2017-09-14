#TLE

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int len = nums.size();
        int ans = 0;
        if(len <= 1)
            return ans;
        int dp[len][len];
        for(int i=0; i<len; i++)
            dp[i][i] = (nums[i] == 0 ? -1: 1);
        for(int i=0; i<len; i++){
            for(int j=i+1; j<len; j++){
                dp[i][j] = dp[i][j-1] + (nums[j] == 0 ? -1: 1);
                if(!dp[i][j])
                    ans = max(ans, j-i+1);
            }
        }
        return ans;
    }
};

#AC

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int len = nums.size();
        map<int, int> mp;
        mp[0] = -1;
        int ans = 0, temp = 0;
        if(len <= 1)
            return ans;
        for(int i=0; i<len; i++){
            temp += (nums[i] == 0? -1: 1);
            if(mp.count(temp)){
                ans = max(ans, i - mp[temp]);
            }
            else
                mp[temp] = i;
        }
        return ans;
    }
};
