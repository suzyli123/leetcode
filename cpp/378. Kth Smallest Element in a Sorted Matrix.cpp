class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> num;
        int m = matrix.size(), n = matrix[0].size();
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++)
                num.push_back(matrix[i][j]);
        }
        sort(num.begin(), num.end());
        return num[k-1];
    }
};
