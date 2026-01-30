class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // optimal approach 
        int m = matrix.size();
        int n = matrix[0].size(); 

        // flag to track if first row should be zeroed
        bool firstRowHasZero = false;
        bool firstColHasZero = false;

        // check if first row has any zero 
        for(int j = 0; j<n; j++){
            if(matrix[0][j] == 0){
                firstRowHasZero = true;
                break;
            }
        }
        // check if the first col has any zero 
        for(int i = 0; i<m ; i++){
            if(matrix[i][0] == 0){
                firstColHasZero = true;
                break;
            }
        }
        // mark rows and columns in first row/columns
        for(int i = 1; i<m ; i++){
            for(int j = 1; j<n; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0; 
                    matrix[0][j] = 0;
                }
            }
        }
        // set matrix cells to zero based of numbers
        for(int i = 1; i<m; i++){
            for(int j = 1; j<n; j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
        // handle first row 
        if(firstRowHasZero){
            for(int j = 0; j<n ; j++){
                matrix[0][j] = 0; 
            }
        }
        if(firstColHasZero){
            for(int i = 0 ; i<m ; i++){
                matrix[i][0] = 0;
            }
        }

    }
};
