class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        auto inPlaceWriter = nums.begin();
        int n = nums.size();
        for (int i=0; i<n; ++i){
            if (nums[i]==x)
                *inPlaceWriter++ = i;
        }
        nums.resize(inPlaceWriter-nums.begin());
        for (auto &q:queries){
            if (q>nums.size())
                q = -1;
            else
                q = nums[q-1];
        }
        return queries;
    }
};