class Solution {
public:
    int merge_and_count(vector<int> & nums , int low ,int high){
        if(low>=high){
            return 0;
        }
        int cnt = 0;
        int mid = (high + low)/2;
        int j = mid+1;
        cnt = merge_and_count(nums , low , mid) + merge_and_count(nums , mid +1 , high);
        for(int i = low ; i <= mid ; i++){
            while( j <= high && nums[i]>2LL*nums[j]){
                j++;
            }
            cnt += (j -(mid+1));
        }
        int i1 = low;
        int i2 = mid+1;
        vector<int> temp;
        temp.reserve(high-low+1);
        while(i1<=mid && i2 <= high){
            if(nums[i1]<=nums[i2]){
                temp.push_back(nums[i1++]);
            }
            else{
                temp.push_back(nums[i2++]);
            }
        }
        while(i1<=mid){
            temp.push_back(nums[i1++]);
        }
        while(i2<=high){
            temp.push_back(nums[i2++]);
        }
        for(int i = 0 ; i < high-low+1 ; i++){
            nums[low+i] = temp[i];
        }
        return cnt;
    }
    int reversePairs(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        int count = merge_and_count(nums , low , high);
        return count;
    }
};