class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int len = nums.size();
        int fmin = pow(2,32), smin = pow(2,32);
        printf("%d %d\n", fmin, smin);
        for(int i=0; i<len; i++){
            if(nums[i] <= fmin)
                fmin = nums[i];
            else if (nums[i] <= smin)
                smin = nums[i];
            else
                return true;
        }
        return false;
    }
};
