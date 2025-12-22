class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        long long sum_sq = (((long long)n*n)*(n*n+1)*(2*n*n+1))/6;
        long long sum = ((n*n)*(n*n+1))/2;
        long long actual_sum = 0;
        long long actual_sum_sq = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                actual_sum+=grid[i][j];
                actual_sum_sq+=(grid[i][j]*grid[i][j]);
            }
        }
        int b = (((sum_sq - actual_sum_sq)/(sum-actual_sum)) + sum-actual_sum)/2;
        int a = b - (sum-actual_sum);
        return {a,b};
    }
};