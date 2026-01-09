class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();
        long long low = 0;
        long long high = r*c - 1;
        bool ans = false;
        while(low<=high){
            long long mid = low + (high-low)/2;
            long long i = mid/c;
            long long j = mid%c;
            if(matrix[i][j]==target){
                ans = true;
                break;
            }
            else if(matrix[i][j]>target){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};