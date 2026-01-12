class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int m = INT_MAX;
        string ans = "";
        for(const string& i : strs){
            int size = i.size();
            m = min(m,size);
        }
        for(int i = 0 ; i < m ; i++){
            char c = strs[0][i];
            for(const string& s : strs){
                if(s[i]!=c){
                    return ans;
                }
            }
            ans+=c;
        }
        return ans;
    }
};