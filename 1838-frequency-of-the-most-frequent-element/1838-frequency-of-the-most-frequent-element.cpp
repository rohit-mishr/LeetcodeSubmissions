class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
    int n = nums.size();
    long long actual_sum = 0;         // use long long for sums
    int start = 0;
    int max_freq = 0;

    for (int end = 0; end < n; ++end) {
        actual_sum += nums[end];

        // required ops to make nums[start..end] all equal to nums[end]
        while ((long long)(end - start + 1) * nums[end] - actual_sum > k) {
            if((end-start+1)==max_freq){
                break;
            }
            actual_sum -= nums[start++];
        }

        max_freq = max(max_freq, end - start + 1);
    }

    return max_freq;
    }
};