class Solution {
public:
    int reverse(int x) {
        int result = 0;
        int q = x;
        int rem;
        while(q!=0){
            rem = q%10;
            q/=10;
            if(result > INT_MAX/10 || result < INT_MIN/10){
                return 0;
            }
            result = result*10 + rem;
        }
        return result;
    }
};