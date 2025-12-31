class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0;
        int right = n-1;
        int mid = (left+right)/2;
        if(nums[0]>target){
            return 0;
        }
        while(left<=right){
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                left = mid+1;
                mid = (left+right)/2;
            }
            else{
                right = mid-1;
                mid = (left+right)/2;
            }
        }
        if(nums[mid]<target){
            return mid+1;
        }
        else{
            return mid-1;
        }
    }
};