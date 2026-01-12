class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int cnt = 0;
        for(auto i : s){
            if(i=='('){
                if(cnt!=0) ans+=i;
                cnt++;
            }
            else if(i==')'){
                if(cnt!=1) ans+=i;
                cnt--;
            }
        }
        return ans;
    }
};