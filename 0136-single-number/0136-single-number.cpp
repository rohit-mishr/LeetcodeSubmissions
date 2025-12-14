class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> map;
        int ans;
        for(int i = 0 ; i < n ; i++){
            map[nums[i]]++;
        }
        for(auto i : map){
            if(i.second == 1){
                ans = i.first;
                break;
            }
        }
        return ans;
    }
};