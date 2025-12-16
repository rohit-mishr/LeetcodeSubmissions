class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int b = prices[0];
        int p = INT_MIN;
        int tp = 0;
        int n = prices.size();
        for(int i = 1; i < n ; i++){
            tp = prices[i] - b;
            if(tp<0){
                b = prices[i];
            }
            p = max(p,tp);
        }
        if (p >= 0)return p;
        else return 0;
    }
};