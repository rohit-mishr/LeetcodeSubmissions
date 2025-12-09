class Solution {
public:
    bool isPalindrome(string s) {
        int end = s.length()-1;
        int start = 0;
        while(start<end){
            while(start<end){
                if(!isalnum(s[start])){
                    start++;
                }
                else{
                    break;
                }
            }
            while(start<end){
                if(!isalnum(s[end])){
                    end--;
                }
                else{
                    break;
                }
            }
            if(tolower(s[start])!=tolower(s[end])){
                cout<<start<<" "<<end;
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};