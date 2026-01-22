class Solution {
public:
    int myAtoi(string s) {
        long ans = 0;
        int n = s.size();
        int i = 0;
        int sign = 1;
        // if(n==0){
        //     return 0;
        // }
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
        while(i<n && s[i]=='0'){
                i++;
        }
        while(i<n && isdigit(s[i])){
            if(ans*sign < INT_MIN/10 || (sign*ans == INT_MIN/10 && s[i] > '8')){
                return INT_MIN;
            }
            else if(ans*sign > INT_MAX/10 || (ans*sign == INT_MAX/10 && s[i] > '7')){
                return INT_MAX;
            }
            ans = ans*10 + (s[i]-'0'); 
            i++;
        }
        //cout<<sign<<" "<<ans;
        return ans*sign;
    }
};