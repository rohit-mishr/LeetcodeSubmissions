class Solution {
public:
    string frequencySort(string s) {
        pair<int,char> freq[256];
        string ans;
        for(int i = 0 ; i < 256 ; i++){
            freq[i] = {0,i};
        }
        for(auto c : s){
            freq[c].first++;
        }
        sort(freq,freq + 256,[](pair<int,char> f , pair<int,char> sec){
            if(f.first>sec.first) return true;
            if(f.first<sec.first) return false;
            return f.second >= sec.second;
        });
        for(auto i : freq){
            if(i.first!=0){
                int temp = i.first;
                while(temp--){
                    ans+=i.second;
                }
            }
        }
        return ans;
    }
};