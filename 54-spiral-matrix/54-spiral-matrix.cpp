class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans ;
        int row = matrix.size();
        int col = matrix[0].size();
        
        int count = 0;
        int total = row*col;
        
        int rowstarting = 0;
        int colstarting = 0;
        int rowending = row-1;
        int colending = col-1;
        
        while(count < total){
            for(int index =rowstarting ;count < total&& index <= colending ; index++){
                ans.push_back(matrix[rowstarting][index]);
                count++;
             }
            rowstarting++;
            for(int index =rowstarting;count < total&& index<=rowending; index++){
                 ans.push_back(matrix[index][colending]);
                count++;
            }
            colending--;
            for(int index =colending;count < total&& index>=colstarting; index--){
                 ans.push_back(matrix[rowending][index]);
                count++;
            }
            rowending--;
            for(int index=rowending;count < total&& index>=rowstarting; index-- ){
                 ans.push_back(matrix[index][colstarting]);
                count++;
            }
            colstarting++;
        }
        return ans;
    }
};