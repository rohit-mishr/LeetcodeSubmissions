class Solution {
public:
    int maxDepth(string s) {
        int m = 0;
        int cnt = 0;
        for(auto i : s){
           if(i == '('){
            cnt++;
            m = max(m,cnt);
           }
           else if(i == ')'){
            cnt--;
           }
        }
        return m;
    }
};