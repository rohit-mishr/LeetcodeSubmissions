class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int r = mat.size();
        int c = mat[0].size();
        int low = 0;
        int high = c -1;
        // if(r==1){
        //     return *max_element(mat[0].begin(),mat[0].end());
        // }
        // if(col == 1)
        while(low<=high){
            int mid = low + (high-low)/2;
            int m = INT_MIN;
            int index = -1;
            for(int i = 0 ; i < r ; i++){
                if(m<mat[i][mid]){
                    m = mat[i][mid];
                    index = i;
                }
            }
            int left = (mid == 0)?-1:mat[index][mid-1];
            int right = (mid == c-1)?-1:mat[index][mid+1];
            int value = mat[index][mid];
            if(value>left && value>right){
                return {index,mid};
            }
            else if(left < value){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return {0,0};
    }
};