class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> &m = matrix;
        int r = m.size();
        int c = m[0].size();
        int col = 1;
        for(int i = 0 ; i < r ; i++){
            for(int j = 0; j < c ; j++){
                if(m[i][j]==0){
                    m[i][0] = 0;
                    if(j==0){
                        col = 0;
                    }
                    else{
                        m[0][j] = 0;
                    }
                }
            }
        }
        for(int i = 1 ; i < r ; i++){
            if(m[i][0] == 0){
                for(int j = 1 ; j < c ; j++){
                    m[i][j] = 0;
                }
            }
        }
        for(int j = 1 ; j < c ; j++){
            if(m[0][j]==0){
                for(int i = 1 ; i < r ; i++){
                    m[i][j] = 0;
                }
            }
        }
        if(m[0][0] == 0){
            for(int j = 1 ; j < c ; j++){
                m[0][j] = 0;
            }
        }
        if(col == 0){
            for(int i = 0 ; i < r ; i++){
                m[i][0] = 0;
            }
        }
        cout<<col;
    }
};