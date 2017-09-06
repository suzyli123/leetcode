class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> count;
        int len = nums.size();
        for(int i=0; i<len; i++)
            count[nums[i]] ++;
        for(map<int, int> ::iterator it = count.begin(); it != count.end(); it ++){
            if(it->second == 1)
                return it->first;
        }
    }
};
