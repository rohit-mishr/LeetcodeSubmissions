class Solution {
public:
    int myAtoi(string s) {
        long ans = 0;
        int n = s.size();
        int i = 0;
        int sign = 1;
        while(i<n && s[i]==' '){
            i++;
        }
        if( i < n && s[i]=='-'){
            sign = -1;
            i++;
        }
        else if(i < n && s[i]=='+'){
            i++;
        }
        while(i<n && isdigit(s[i])){
            ans = ans*10 + (s[i]-'0'); 
            if(ans*sign < INT_MIN){
                return INT_MIN;
            }
            else if(ans*sign > INT_MAX){
                return INT_MAX;
            } 
            i++;
        }
        return ans*sign;
    }
};