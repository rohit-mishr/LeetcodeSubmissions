class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        int end = 0;
        int n = s.size();
        string ans = "";
        for(end = 0 ; end < n ; end++){
            if(s[end]==' '){
              if(start<end){
                string temp = s.substr(start,(end-start));
                if(!ans.empty()){
                    temp+=" ";
                }
                ans = temp+ans;
              }
              start = end + 1;
            }
        }
        if(start<end){
            string temp = s.substr(start,(end-start));
            if(!ans.empty()){
                temp+=" ";
            }
            ans = temp+ans;
        }
        return ans;
    }
};