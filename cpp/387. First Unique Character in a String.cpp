class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> letter(26, 0);
        int len = s.size();
        for(int i=0; i<len; i++)
            letter[s[i]-'a'] ++;
        for(int i=0; i<len; i++){
            if(letter[s[i]-'a'] == 1)
                return i;
        }
        return -1;
        
    }
};
