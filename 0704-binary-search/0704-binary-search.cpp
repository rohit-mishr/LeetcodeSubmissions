class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int mid = (n-1)/2;
        int left = 0;
        int right = n-1;
        while(left<=right){
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid]<target){
                left = mid+1;
                mid  = (left+right)/2;
            }
            else{
                right = mid -1;
                mid = (left + right)/2;
            }
        }
        return -1;
    }
};