
                                               // detectCycleInUndirectedGraph-DFS
                                               
bool cycle(int curr,int par,vector<vector<int>>&adj,vector<int>&vis)
{
    vis[curr]=true;
    for(int nbr:adj[curr])
    {
        if(!vis[nbr])
        {
            if(cycle(nbr,curr,adj,vis))
            {
                return true;
            }
        }
        else if(vis[nbr] && nbr!=par)
        {
            return true;
        }
    }
    return false;
}

bool isCyclePresent(vector<vector<int>>&adj,int V)
{
    vector<bool> vis(V,false);
    for(int i=0;i<V;i++)
    {
        if(!vis[i])
        {
            if(cycle(i,-1,adj,vis)) return true;
        }
    }
    return false;
}