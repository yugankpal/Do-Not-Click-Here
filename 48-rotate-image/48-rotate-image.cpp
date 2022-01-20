class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int start = 0;
        int end = row-1;
        
        // transpose of matix
        for(int i = 0; i< row; i++){
            for(int j = i; j< col; j++){
                swap(matrix[i][j] , matrix[j][i]);
            }
        }
        
        for(int i = 0; i< row; i++){
            for(int j = 0; j< row/2; j++){
               swap(matrix[i][j] , matrix[i][row-j-1]);
                
            }
        }
    }
};