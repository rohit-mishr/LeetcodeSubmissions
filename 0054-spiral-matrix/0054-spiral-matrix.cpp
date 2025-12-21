class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        int r = m.size();
        int c = m[0].size();
        int tr = 0;
        int rc = c-1;
        int br = r-1;
        int lc = 0;
        vector<int> ans;
        ans.reserve(r*c);
        while(tr <= br && lc <= rc){
            for(int j = lc ; j  <= rc ; j++ ){
                ans.push_back(m[tr][j]);
            }
            tr++;
            for(int i = tr ; i <= br ; i++){
                ans.push_back(m[i][rc]);
            }
            rc--;
            if(tr<=br){
                for(int j = rc ; j >= lc ; j--){
                    ans.push_back(m[br][j]);
                }
            }
            br--;
            if(lc<=rc){
                for(int i = br ; i >=tr; i--){
                    ans.push_back(m[i][lc]);
                }
            }
            lc++;
        }
        return ans;
    }
};