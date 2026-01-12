class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int cnt = 0;
        for(auto i : s){
            if(i=='(' && cnt == 0){
                cnt++;
            }
            else if(i=='(' && cnt != 0){
                ans+='(';
                cnt++;
            }
            else if(i==')' && cnt==1){
                cnt--;
            }
            else if(i == ')' && cnt!=1){
                ans+=')';
                cnt--;
            }
        }
        return ans;
    }
};