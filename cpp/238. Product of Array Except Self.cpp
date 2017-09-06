class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        int count = 0;
        int total = 1;
        vector<int> ans(len, 0);
        for(int i=0; i<len; i++){
            if(nums[i] == 0)
                count ++;
            else if(count < 2)
                total *= nums[i];
        }
        for(int i=0; i<len; i++){
            if(nums[i] == 0)
                ans[i] = count>1 ? 0 : total;
            else
                ans[i] = count>0 ? 0 :total/nums[i];
        }
        return ans;
    }
};
