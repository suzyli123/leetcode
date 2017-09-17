class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int len = nums.size();
        if(len < 2)
            return len;
        int ans = 1, temp = 1;
        for(int i=1; i<len; i++){
            if(nums[i] > nums[i-1]){
                temp ++;
                ans = max(ans, temp);
            }
            else{
                temp = 1;
            }
        }
        return ans;
    }
};
