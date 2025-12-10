class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int> hashmap(nums.size());
        vector<int> ans(queries.size()); 
        int index = 0;
        int n = nums.size();
        for (int i=0; i<n; ++i){
            if (nums[i]==x)
                hashmap[index++] = i;
        }
        //hashmap.resize(index);
        for(auto i : hashmap){
            cout<<i<<" ";
        }
        for(int i  = 0 ; i < queries.size() ; i++){
            if(queries[i]>index){
                ans[i] = -1;
            }
            else {
                ans[i] = hashmap[queries[i]-1];
            }
        }
        return ans;
    }
};