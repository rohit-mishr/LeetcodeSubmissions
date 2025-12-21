class Solution {
public:
    vector<vector<int>> generate(int r) {
        vector<vector<int>> ans;
        ans.reserve(r);
        ans.push_back({1});
        if(r==1){
            return ans;
        }
        ans.push_back({1,1});
        for(int i = 2 ; i < r ; i++){
            vector<int> row;
            row.reserve(i+1);
            row.push_back(1);
            for(int j = 1 ; j < i ; j++){
                row.push_back(ans[i-1][j-1]+ans[i-1][j]);
            }
            row.push_back(1);
            ans.push_back(row);
        }
        return ans;
    }
};