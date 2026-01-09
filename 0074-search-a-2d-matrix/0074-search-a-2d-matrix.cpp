class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();
        int low = 0;
        int high = r-1;
        bool ans = false;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(matrix[mid][0]>target){
                high = mid - 1;
            }
            else if(matrix[mid][0]==target){
                ans = true;
                break;
            }
            else if (target > matrix[mid][0] && target <= matrix[mid][c-1]){
                int l = 0;
                int h = c-1;
                while(l<=h){
                    int m = l + (h-l)/2;
                    if(matrix[mid][m]==target){
                        return true;
                    } 
                    else if(matrix[mid][m]<target){
                        l = m + 1;
                    }
                    else{
                        h = m -1;
                    }
                }
                return false;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};