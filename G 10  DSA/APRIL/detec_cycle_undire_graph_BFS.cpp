                                             // detectCycleInUndirectedGraph-BFS

bool cycle(int curr,int par,vector<vector<int>>&adj,vector<int>&vis)
{
    vis[curr]=true;
    queue<pair<int,int>> q;
    q.push({curr,-1});
    while(!q.empty()){
        int node=q.front().first;
        int parent=q.front().second;

        for(int nbr:adj[node])
        {
            if(!vis[nbr])
            {
                vis[nbr]=true;
                q.push({nbr,node});
            }
            else if(vis[nbr] && nbr!=par)
            {
                return true;
            }
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
