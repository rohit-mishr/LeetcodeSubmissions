class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        vector<string> l;
        string ans = "";
        string word = "";
        for(char i : s){
            if(i!=' '){
                word+=i;
            }
            else{
                if(!word.empty()){
                    l.push_back(word);
                    word = "";
                }
            }
        }
        if(!word.empty()){
            l.push_back(word);
        }
        reverse(l.begin(),l.end());
        for(auto i : l){
            if(!ans.empty()){
                ans+=" ";
            }
            ans+=i;
        }
        return ans;
    }
};