class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix.size(),columns=matrix[0].size(),c=0;
        vector< vector<int>> a(columns,vector<int>(rows));
        
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
            {
                a[j][i] = matrix[i][j];
            }
            
        }
        
        return a;
    }
};
