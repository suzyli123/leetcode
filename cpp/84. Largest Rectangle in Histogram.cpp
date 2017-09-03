class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        heights.push_back(0);
        int len = heights.size();
        int ans = 0, i = 0;
        stack<int> s;
        while(i<len){
            if(s.empty() || heights[s.top()] < heights[i]){
                s.push(i);
                i++;
            }
            else{
                int h = heights[s.top()];
                s.pop();
                ans = max(ans, h*(s.empty() ? i : (i - s.top() - 1) ));
            }
        }    
        return ans;
    }

};
