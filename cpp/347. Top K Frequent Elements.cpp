class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int len = nums.size();
        vector<int> ans;
        vector<pair<int,int>> temp;
        sort(nums.begin(), nums.end());
        for(int i=0; i<len; i++){
            int count=1;
            while(i+1<len && i<len && nums[i+1]==nums[i]){
                count ++;
                i ++;
            }
            temp.push_back(pair<int,int>(count,nums[i]));
        }
        sort(temp.begin(), temp.end());
        
        int i=temp.size()-1,j=0;
        while(j<k && i>=0){
            ans.push_back(temp[i].second);
            j ++;
            i --;
        }
        return ans;
    }
};
