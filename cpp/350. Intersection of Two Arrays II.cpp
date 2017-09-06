class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size(), len2 = nums2.size();
        int i=0, j=0;
        vector<int> ans;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        while(i<len1 && j<len2){
            if(nums1[i] == nums2[j]){
                ans.push_back(nums1[i]);
                ++ i;
                ++ j;
            }
            else if(nums1[i] < nums2[j])
                ++ i;
            else
                ++ j;
        }
        return ans;
    }
};
