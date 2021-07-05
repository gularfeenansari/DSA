class Solution {
public:
    
    void solve(vector<vector<int>>& image,int sr, int sc, int newColor,int oldcolor)
    {
         if(sr<0 || sr>= image.size() || sc<0 || sc>=image[0].size())
        {
            return;
        }
        
        if( image[sr][sc]!=oldcolor)
        {
            return;
        }
        
       
        
        
        image[sr][sc]=newColor;
        
        
        //up
        solve(image,sr-1,sc,newColor,oldcolor);
         //down
        solve(image,sr+1,sc,newColor,oldcolor);
                
        //left
        solve(image,sr,sc-1,newColor,oldcolor);
              
        //Right
        solve(image,sr,sc+1,newColor,oldcolor);
        
    }
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int oldcolor  = image[sr][sc];
        
        if(image[sr][sc] != newColor)
        {
            solve(image,sr,sc,newColor,oldcolor);
        }
        
        return image;
        
        

        
        
    }
};
