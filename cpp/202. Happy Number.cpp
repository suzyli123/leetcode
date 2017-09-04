class Solution {
public:
    bool isHappy(int n) {
        stack<int> s;
        map<int, int> num;
        while(n != 1){
            while(n){
                s.push(n%10);
                n = n/10;
            }
            while(!s.empty()){
                int temp = s.top();
                s.pop();
                n += temp*temp;
            }
            if(num[n] != 0)
                return false;
            else
                num[n] = 1;
        }
        return true;
    }
};
