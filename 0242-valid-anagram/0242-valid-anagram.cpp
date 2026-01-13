class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr1[256] = {0};
        int arr2[256] = {0};
        if(s.size()!=t.size()){
            return false;
        }
        for(char c : s){
            arr1[c]++;
        }
        for(char c : t){
            arr2[c]++;
        }
        for(char c : s){
            if(arr1[c]!=arr2[c]){
                return false;
            }
        }
        return true;
    }
};