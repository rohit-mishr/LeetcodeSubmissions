class Solution {
public:
    bool isPalindrome(int x) {
        long long palindrome = 0;
        int q = x;
        int rem;
        if(x > INT_MAX || x < INT_MIN){
            return false;
        }
        if(x<0){
            return false;
        }
        while(q!=0){
            rem = q % 10;
            q/=10;
            palindrome = palindrome*10 + rem;
        }
        if(palindrome == x){
            return true;
        }
        else {
            return false;
        }
    }
};