class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int m = 1;
        if(n==0){
            return 0;
        }
        unordered_set<int> st;
        for(auto it : nums){
            st.insert(it);
        }
        for(auto it : st){
            int cnt = 1;
            int x = it;
            if(st.find(it-1)==st.end()){
                while(st.find(x+1)!=st.end()){
                    cnt++;
                    x++;
                }
            }
            m = max(m,cnt);
        }
        return m;
    }
};