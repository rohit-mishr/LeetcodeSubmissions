class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();
        int row = 0;
        int col = c-1;
        bool ans = false;
        while(row<r && col >=0){
            if(matrix[row][col]==target){
                ans = true;
                break;
            }
            else if(matrix[row][col]<target){
                row++;
            }
            else{
                col--;
            }
        }
        return ans;
    }
};