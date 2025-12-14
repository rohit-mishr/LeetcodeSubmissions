class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow = -1;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            if(nums[i]==0){
                slow = i;
                break;
            }
        }
        if(slow == -1){
            return;
        }
        for(int fast = slow+1 ; fast < n ; fast++){
            if(nums[fast]!=0){
                nums[slow] = nums[fast];
                nums[fast] = 0;
                slow++;
            }
        }
    }
};