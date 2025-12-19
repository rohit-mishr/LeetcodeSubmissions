class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int m = 1;
        int cnt = 1;
        if(n==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int prev = nums[0];
        for(int i = 1 ; i < n ; i++){
            if(nums[i]-prev==1){
                cnt++;
            }
            else if(nums[i]!=prev){
                cnt = 1;
            }
            prev = nums[i];
            m = max(m,cnt);
        }
        return m;
    }
};