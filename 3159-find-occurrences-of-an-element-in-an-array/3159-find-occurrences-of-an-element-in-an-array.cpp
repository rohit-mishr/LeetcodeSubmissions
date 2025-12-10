class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int> ans;
        unordered_map<int,int> map;
        int count =0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]==x){
                count++;
                map[count] = i;
            }
        }
        for(int i = 0 ; i < queries.size() ; i++){
            if(queries[i] > count){
                ans.push_back(-1);
            }
            else{
                ans.push_back(map[queries[i]]);
            }
        }
        return ans;
    }
};