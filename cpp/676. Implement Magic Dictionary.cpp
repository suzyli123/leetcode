class MagicDictionary {
public:
    /** Initialize your data structure here. */
    vector<string> dic;
    MagicDictionary() {
        vector<string> dic;
    }
    
    /** Build a dictionary through a list of words */
    void buildDict(vector<string> dict) {
        int len = dict.size();
        for(int i=0; i<len; i++)
            dic.push_back(dict[i]);
    }
    
    /** Returns if there is any word in the trie that equals to the given word after modifying exactly one character */
    bool search(string word) {
        int len = dic.size();
        int flag;
        for(int i=0; i<len; i++){
            if(dic[i].size() == word.size()){
                flag = 0;
                for(int j=0; j<word.size(); j++){
                    if(flag > 1)
                        break;
                    if(dic[i][j] != word[j])
                        flag ++;
                }
                if(flag == 1)
                    return true;
            }
        }
        return false;
    }
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary obj = new MagicDictionary();
 * obj.buildDict(dict);
 * bool param_2 = obj.search(word);
 */
