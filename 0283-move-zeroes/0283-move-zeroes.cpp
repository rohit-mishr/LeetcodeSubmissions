class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow = 0;
        int n = nums.size();
        for(;slow<n;slow++){
            if(nums[slow]==0){
                break;
            }
        }
        for(int fast = slow+1 ; fast< n ; fast++){
            if(nums[fast]!=0){
                nums[slow] = nums[fast];
                nums[fast] = 0;
                slow++;
            }
        }
    }
};