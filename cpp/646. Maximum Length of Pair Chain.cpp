//DP
class Solution {
public:
     static bool cmp(const vector<int> &v1,const vector<int> &v2){
        if(v1[1]==v2[1])
            return v1[0]<=v2[0];
        else
            return v1[1]<v2[1];
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        int len = pairs.size();
        if(len < 2)
            return len;
        sort(pairs.begin(), pairs.end(), cmp);
        vector<int> dp(len, 1);
        int ans = 0;
        for(int i=0; i<len; i++){
            for(int j=0; j<i; j++){
                if(pairs[i][0] > pairs[j][1] && dp[i] < dp[j]+1)
                    dp[i] = dp[j]+1;
            }
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};

//贪心
class Solution {
public:
     static bool cmp(const vector<int> &v1,const vector<int> &v2){
        if(v1[1]==v2[1])
            return v1[0]<=v2[0];
        else
            return v1[1]<v2[1];
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        int len = pairs.size();
        if(len < 2)
            return len;
        sort(pairs.begin(), pairs.end(), cmp);
        vector<int> last = pairs[0];
        int ans = 1;
        for(int i=1; i<len; i++){
           if(pairs[i][0] > last[1]){
               ans ++;
               last = pairs[i];
           }
        }
        return ans;
    }
};
