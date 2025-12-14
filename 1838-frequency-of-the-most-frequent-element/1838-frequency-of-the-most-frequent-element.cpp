class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int max_freq = 0;
        int start = 0;
        long long actual_sum = 0;
        for(int end = 0 ; end < n ; end++){
            actual_sum += nums[end];
            if((long long)(end - start + 1 )*nums[end] > (actual_sum + k)){
                actual_sum-=nums[start++];
            }
            max_freq = max(max_freq,(end-start+1));
        }
        return max_freq;
    }
};