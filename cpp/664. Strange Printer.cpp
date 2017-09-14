class Solution {
public:
    int strangePrinter(string s) {
        int len = s.size();
        return dfs(s, 0, len-1); 
    }
private:
    int dp[101][101];
    int dfs(string &s, int left, int right){
        if(left > right)
            return 0;
        if(dp[left][right] != 0)
            return dp[left][right];
        dp[left][right] = dfs(s, left, right-1) + 1;
        for(int i=left; i<right; i++){
            if(s[i] == s[right])
                dp[left][right] = min(dp[left][right], dfs(s, left, i) + dfs(s, i+1, right-1));
        }
        return dp[left][right];
    }
};
