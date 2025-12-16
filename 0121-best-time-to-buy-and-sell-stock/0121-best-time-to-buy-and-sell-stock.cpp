class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp = INT_MAX;
        int pr = INT_MIN;
        for(int p : prices){
            if(p < mp){
                mp = p;
            }
            else{
                pr = max(pr,p-mp);
            }
        }
        if (pr>=0) return pr;
        return 0;
    }
};