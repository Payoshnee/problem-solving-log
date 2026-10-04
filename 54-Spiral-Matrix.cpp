class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int rowBegin = 0;
        int rowEnd = matrix.size() - 1;
        int colBegin = 0;
        int colEnd = matrix[0].size() - 1;
        while (rowBegin <= rowEnd && colBegin <= colEnd) {
            for (int i = colBegin; i <= colEnd; i++) {
                result.push_back(matrix[rowBegin][i]);
            }
            rowBegin++;
            for (int j = rowBegin; j <= rowEnd; j++) {
                result.push_back(matrix[j][colEnd]);
            }
            colEnd--;
            if (rowBegin <= rowEnd) {
                for (int j = colEnd; j >= colBegin; j--) {
                    result.push_back(matrix[rowEnd][j]);
                }
            }
            rowEnd--;
            if (colBegin <= colEnd) {
                for (int j = rowEnd; j >= rowBegin; j--) {
                    result.push_back(matrix[j][colBegin]);
                }
            }
            colBegin++;
        }
        return result;
    }
};
// [(0,0) (0,1) (0,2) (1,2) (2,2) (2,1) (2,0) (1,0) (1,1)]
// 1 2 3 6 9 8 7 4 5