class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> matrixCopy = matrix;
        for(int i = 0; i < matrix.size();i++){
            for(int j = 0; j <matrix[0].size();j++){
                if(matrixCopy[i][j] == 0){
                    for(int r = 0; r < matrix[0].size();r++){
                        matrix[i][r] = 0;
                    }
                    for(int c = 0; c < matrix.size();c++){
                        matrix[c][j] = 0;
                    }
                    
                }
            }
        }
    }
};

