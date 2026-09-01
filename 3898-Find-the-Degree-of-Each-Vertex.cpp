class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<int> degreeVertex(n,0);
        int count = 0;
        for(int i = 0; i < n; i++){

            for(int j = 0; j < n; j++){
                if(matrix[i][j] == 1){
                    count++;
                }
            }

            degreeVertex[i] = count;
            count = 0;
        }

    return degreeVertex;
    }
};
//hn karti yahi try 
//[0 1 1] [1 0 1] [1 1 0]
//[2]      [2]    [2]
