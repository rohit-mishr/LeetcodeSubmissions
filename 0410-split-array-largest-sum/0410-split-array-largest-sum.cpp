class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid = low + (high-low)/2;
            int count = 1;
            int sum = 0;
            for(int i : nums){
                if(sum+i>mid){
                    count++;
                    sum = i;
                }
                else {
                    sum+=i;
                }
                if(count>k) break;
            }
            if(count<=k){
                high = mid -1;
            }
            else{
                low = mid + 1;
            }
        } 
        return low;  
    }
};