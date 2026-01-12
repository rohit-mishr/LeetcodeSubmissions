class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int start = n-1;
        int end = n-1;
        string ans = "";
        for(start = n-1 ; start>=0 ; start--){
            if(s[start]==' '){
              if(start<end){
                if(!ans.empty()){
                    ans +=" " + s.substr(start+1,(end-start));
                }
                else{
                    ans += s.substr(start+1,(end-start));
                }
              }
              end = start - 1;
            }
        }
        if(start<end){
            string temp = s.substr(start+1,(end-start));
            if(!ans.empty()){
                ans += " " + s.substr(start+1,(end-start));
            }
            else{
                ans += s.substr(start+1,(end-start));
            }
        }
        return ans;
    }
};