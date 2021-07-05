class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        
        int m=grid.size(),n=grid[0].size(),sum=0,zeroes=0;
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                
                if(grid[i][j]==0)
                {
                    zeroes++;
                    continue;
                }
                
                //left
                if(j-1<0)
                {
                    sum+=grid[i][j];
                }
                else
                {
                    int temp = grid[i][j]-grid[i][j-1];
                    if(temp>0 )
                    {
                        sum+=temp;
                    }
                }
                
                //right
                
                if(j+1>=n)
                {
                    sum+=grid[i][j];
                }
                else
                {
                    int temp = grid[i][j]-grid[i][j+1];
                    if(temp>0)
                    {
                        sum+=temp*1;
                    }
                }
                
                //top
                  if(i-1<0)
                {
                    sum+=grid[i][j];
                }
                else
                {
                    int temp = grid[i][j]-grid[i-1][j];
                    if(temp>0)
                    {
                        sum+=temp;
                    }
                }
                
                //bottom
                
                  if(i+1>=m)
                {
                    sum+=grid[i][j];
                }
                else
                {
                    int temp = grid[i][j]-grid[i+1][j];
                    if(temp>0)
                    {
                        sum+=temp;
                    }
                }
            }
        }
        
        sum = sum+((n*m-zeroes)*2);
        return sum;
        
    }
};
