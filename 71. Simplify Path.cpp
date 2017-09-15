class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string temp, ans = "";
        int len = path.size();
        for(int i=0; i<len; i++){
            while(i<len && path[i] == '/')
                i ++;
            temp = "";
            while(i<len && path[i] != '/'){
                temp += path[i];
                i ++;
            }
            if(temp == ".." && !st.empty())
                st.pop();
            else if(temp != ".." && temp != "." && temp != "")
                st.push(temp);
        }
        if(st.empty())
            return "/";
        else{
            while(!st.empty()){
                ans = '/' + st.top() + ans;
                st.pop();
            }
        }
        return ans;
        
    }
};
