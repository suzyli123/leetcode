class Solution {
public:
    int hIndex(vector<int>& citations) {
        int len = citations.size();
        int left = 0, right = len - 1, mid;
        while(left <= right){
            mid = (left + right)/2;
            if(citations[mid] < len-mid)
                left = mid + 1;
            else if(citations[mid] == len-mid)
                return len - mid;
            else
                right = mid - 1;
        }
        return len - left;
    }
};
