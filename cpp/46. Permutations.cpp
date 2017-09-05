class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int> > ans;
        int len = nums.size();
        per(ans, nums, 0, len);
        return ans;
    }
    void per(vector<vector<int> >& ans, vector<int> nums, int pos, int len){
        if(pos == len-1)
            ans.push_back(nums);
        else{
            for(int i = pos; i < len; i ++){
                swap(nums[pos], nums[i]);
                per(ans, nums, pos+1, len);
                swap(nums[pos], nums[i]);
            }
        }
    }
};
