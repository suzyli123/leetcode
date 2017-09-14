class Solution {
public:
    string optimalDivision(vector<int>& nums) {
        int len = nums.size();
        string temp, ans;
        if(len == 1)
            return to_string(nums[0]);
        else if(len == 2)
            return to_string(nums[0]) + "/" + to_string(nums[1]);
        else{
            ans = to_string(nums[0]) + "/" + "(" + to_string(nums[1]);
            for(int i=2; i<len; i++)
                temp = temp + "/" + to_string(nums[i]);
            ans = ans + temp + ")";
            return ans;
        }
    }
};
