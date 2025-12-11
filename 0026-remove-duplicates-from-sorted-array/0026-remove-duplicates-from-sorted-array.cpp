class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int slow = 1; 
        int fast = 1;
        while(fast<n){
            if(nums[fast]==nums[fast-1]){
                fast++;
            }
            else{
                nums[slow] = nums[fast];
                slow++;
                fast++;
            }
        }
        return slow;
    }
};