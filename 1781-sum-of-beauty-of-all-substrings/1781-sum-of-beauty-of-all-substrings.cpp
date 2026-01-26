class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int sum = 0;
        for(int i = 0 ; i < n ; i++){
            unordered_map<char,int> m;
            for(int j = i ; j < n ; j++){
                m[s[j]]++;
                int max_freq = INT_MIN;
                int min_freq = INT_MAX;
                for(auto it : m){
                    max_freq = max(max_freq,it.second);
                    min_freq = min(min_freq,it.second);
                }
                sum+=max_freq-min_freq;
            }
        }
        return sum;
    }
};