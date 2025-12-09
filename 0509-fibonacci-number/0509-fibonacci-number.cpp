class Solution {
public:
    int fib(int n) {
        int num1 = 0;
        int num2 = 1;
        if(n==0){
            return 0;
        }
        for(int i = 2 ; i <= n ; i++){
        int temp = num2;
        num2 = num2 + num1;
        num1 = temp;
        }
        return num2;
    }   
};