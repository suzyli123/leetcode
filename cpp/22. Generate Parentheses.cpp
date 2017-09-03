class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        generate(n, n, "", ans);
        return ans;
    }
    void generate(int left, int right, string s, vector<string>& ans){
        if(left == 0 && right == 0){
            ans.push_back(s);
            return;
        }
        if(left > 0)
            generate(left-1, right, s + '(', ans);
        if(left < right)
            generate(left, right-1, s + ')', ans);
    }
};
