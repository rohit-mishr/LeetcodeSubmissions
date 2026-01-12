class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int start =  0;
        int end = 0;
        for(; end < n ; end++){
            if(nums[end]!=0){
                swap(nums[start],nums[end]);
                start++;
            }
        }
    }
};