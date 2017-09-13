class Solution {
public:
    int hammingDistance(int x, int y) {
        int temp = x^y, ans = 0;
        while(temp){
            if(temp%2 == 1)
                ans ++;
            temp /= 2;
        }
        return ans;
    }
};
