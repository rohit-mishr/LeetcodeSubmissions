class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int mp = nums[0];
        int maxp = nums[0];
        int minp = nums[0];
        for(int i = 1 ; i < n ; i++){
            int curr = nums[i];
            if(curr<0) swap(maxp,minp);
            maxp  = max(curr,curr*maxp);
            minp =  min(curr,curr*minp);
            mp = max(mp,maxp);
        }
        return mp;
    }
};