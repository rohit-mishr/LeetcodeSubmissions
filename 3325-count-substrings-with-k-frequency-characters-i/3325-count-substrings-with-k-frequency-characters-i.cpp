class Solution {
public:
    int validSubstr(string s , int k){
        int n = s.size();
        int left = 0;
        int right = 0;
        int ans = 0;
        //int arr[26] = {0};
        unordered_map<char,int> m;
        while(right < n){
            m[s[right]]++;
            while(m[s[right]]>=k){
                m[s[left]]--;
                if(m[s[left]]==0){
                    //m.erase(s[left]);
                }
                left++;
            }
            // arr[s[right]-'a']++;
            // while(arr[s[right]-'a']>=k){
            //     arr[s[left]-'a']--;

            // }
            ans+=(right-left+1);
            right++;
        }
        return ans;
    }
    int numberOfSubstrings(string s, int k) {
        int n = s.size();
        int total = n*(n+1)/2;
        int ans = total - validSubstr(s,k);
        return ans;
    }
};