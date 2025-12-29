class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int mp = INT_MIN;
        int pref = 1;
        int suff = 1;
        for(int i = 0 ; i < n ; i++){
            if(pref == 0) pref  = 1;
            if(suff == 0) suff  = 1;
            suff*=nums[n-1-i];
            pref*=nums[i];
            mp = max(mp,max(pref,suff));
        }
        return mp;
    }
};