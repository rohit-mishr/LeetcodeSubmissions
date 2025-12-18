class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int n = nums.size();
       int start = 0;
       int m = 1;
       set<int> tr;
       if(n==0){
        return 0;
       }
       for(auto i : nums){
        tr.insert(i);
       }
       int cnt = 1;
       int prev = INT_MIN;
       for(auto i : tr){
        if(prev==INT_MIN){
            prev = i;
        }
        else if(i-prev==1){
            cnt++;
            m = max(m,cnt);
        }
        else cnt = 1;
         prev = i;
       }
       return m; 
    }
};