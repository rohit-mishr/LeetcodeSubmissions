class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> p , n;
        p.reserve(nums.size()/2);
        n.reserve(nums.size()/2);
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]<0){
                n.push_back(nums[i]);
            }
            else{
                p.push_back(nums[i]);
            }
        }
        int index = 0;
        for(int i = 0 ; i < nums.size()/2 ; i++){
            nums[index++] = p[i];
            nums[index++] = n[i];
        }
        return nums;
    }
};