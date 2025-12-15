class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> map;
        int sum = 0;
        int cnt = 0;
        for(int i = 0 ; i < n ;i++){
            sum+=nums[i];
            if(sum==k){
                cnt++;
            }
            if(map.count(sum-k)) cnt+= map[sum-k];
            map[sum]++;
            
        }
        return cnt;
    }
};