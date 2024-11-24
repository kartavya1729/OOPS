class Solution 
{
public:
    int orangesRotting(vector<vector<int>>& grid) 
    {
        
        queue<pair<int,int>> q;
        int m=grid.size(),n=grid[0].size(),fresh=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                }
                else if(grid[i][j]==1)
                {
                    fresh++;
                }
            }
        }
        if(fresh==0) return 0;
        int ans=-1;

        int dx[]={-1,0,1,0};
        int dy[]={0,-1,0,1};
        while(!q.empty())
        {
            int sz=q.size();
            ans++;
            while(sz--)
            {
                auto f=q.front();
                q.pop();
                int i=f.first,j=f.second;

                for(int k=0;k<4;k++)
                {
                    int nrow=i+dx[k],ncol=j+dy[k];

                    if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && 
                    grid[nrow][ncol]==1)
                    {
                        grid[nrow][ncol]=2;
                        fresh--;
                        q.push({nrow,ncol});
                    }
                }
            }
        }
        if(fresh==0) return ans;
        return -1;
    }
};