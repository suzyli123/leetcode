class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int len = nums.size(), temp;
        if(k == 0){
            for(int i=0; i<len-1; i++){
                if(nums[i] == 0 && nums[i+1] == 0)
                    return true;
            }
            return false;
        }
        for(int i=0; i<len-1; i++){
            temp = nums[i];
            for(int j=i+1; j<len; j++){
                temp += nums[j];
                if(temp%k == 0)
                    return true;
            }
        }
        return false;
    }
};
