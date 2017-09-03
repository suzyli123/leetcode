class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        if(len == 0)
            return 0;
        int min = prices[0], ans = 0;
        for(int i=1; i<len; i++){
            if(prices[i] > min)
                ans = max(ans, prices[i]-min);
            else
                min = prices[i];
        }
        return ans;
    }
};
