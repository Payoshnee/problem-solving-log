class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<int>> matrix(3, vector<int>(3, 0));
        for(int i = 0; i < moves.size(); i++){
            int rows = moves[i][0];
            int cols = moves[i][1];

            if(i % 2 == 0){
                matrix[rows][cols] = 1;
            }
            else{
                matrix[rows][cols] = -1;
            }

        } 
        for(int i = 0; i < 3; i++){
            int sum = 0;
            for(int j = 0; j < 3; j++){
                sum += matrix[i][j];
            }
            if(sum == 3){
                return "A";
            }
            else if(sum == -3){
                return "B";
            }
        }
        for(int j = 0; j < 3; j++){
            int sum = 0;
            for(int i = 0; i < 3; i++){
                sum += matrix[i][j];
            }
            if(sum == 3){
                return "A";
            }
            else if(sum == -3){
                return "B";
            }
        }
        int sum = 0;
        for(int i = 0; i < 3;i++){
            sum += matrix[i][i];
             if(sum == 3){
                return "A";
            }
            else if(sum == -3){
                return "B";
            }
        }
        sum = 0;
        for(int i=0; i < 3; i++){
            sum += matrix[i][2-i];
             if(sum == 3){
                return "A";
            }
            else if(sum == -3){
                return "B";
            }
        }
        
        if(moves.size() == 9){
            return "Draw";
        }
        else{
            return "Pending";
        }
    }
};
