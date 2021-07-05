class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        
        int row_max=0,col_max=0,zeroes=0,sum=0;
        
        for(int i=0;i<grid.size();i++)
        {
            row_max=0;
            for(int j=0;j<grid[0].size();j++)
            {
                
                if(grid[i][j]==0)
                {
                    zeroes++;
                }
                
                if(grid[i][j]>row_max)
                {
                    row_max=grid[i][j];
                }
                
            }
            sum+=row_max;
        }
       
        
        for(int i=0;i<grid.size();i++)
        {
            col_max=0;
            for(int j=0;j<grid[0].size();j++)
            {
                
                
                if(grid[j][i]>col_max)
                {
                    col_max=grid[j][i];
                }
                
            }
            sum+=col_max;
        }

        
        sum = sum+(grid.size()*grid[0].size()-zeroes);
        return sum;
        
        
        
    }
};
