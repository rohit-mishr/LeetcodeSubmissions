class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) return true; // 0,1,2 always fine

        int breaks = 0;
        for (int i = 0; i < n; ++i) {
            if (nums[i] > nums[(i + 1) % n]) ++breaks;
            if (breaks > 1) return false; // early exit
        }
        return true;
    }
};
