class Solution 
{
public:
    int numIslands(vector<vector<char>>& grid) 
    {
        int m=grid.size(),n=grid[0].size();
        vector<vector<bool>> vis(m,vector<bool> (n,false));

        int components=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {

                if(!vis[i][j] && grid[i][j]=='1')
                {
                    components++;
                    dfs(i,j,grid,vis);
                }
            }
        }
        return components;
    }

    void dfs(int i,int j,vector<vector<char>>&grid,
    vector<vector<bool>>&vis){


        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size()||
        grid[i][j]=='0' || vis[i][j]){
            return ;
        }

        vis[i][j]=true;
        dfs(i-1,j,grid,vis);
        dfs(i+1,j,grid,vis);
        dfs(i,j-1,grid,vis);
        dfs(i,j+1,grid,vis);
    }
};