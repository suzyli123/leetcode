class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        map<int, int> num;
        int ans = 0;
        for(int i=0; i<A.size(); i++)
            for(int j=0; j<B.size(); j++)
                num[A[i] + B[j]] += 1;
        for(int i=0; i<C.size(); i++)
            for(int j=0; j<D.size(); j++)
                ans +=num[-C[i] - D[j]];
        return ans;
    }
};
