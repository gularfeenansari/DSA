class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int> tp;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                tp.push_back(grid[i][j]);
            }
        }
        k =k%(grid.size()*grid[0].size());
        for(int i=0;i<k;i++)
        {
            int temp = tp[tp.size()-1];
            for(int j=tp.size()-1;j>0;j--)
            {
                tp[j]=tp[j-1];
            }
            tp[0] = temp;
        }
        int m=0;
         for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                grid[i][j] = tp[m++];
            }
        }
        return grid;
        
    }
};
