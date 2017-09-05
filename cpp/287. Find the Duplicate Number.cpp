class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int len = nums.size();
        for(int i=0; i<len; i++){
            int temp = abs(nums[i]);
            if(nums[temp] > 0)
                nums[temp] = -nums[temp];
            else
                return temp;
        }
    }
};
