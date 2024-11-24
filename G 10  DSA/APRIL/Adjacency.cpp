int main()
{
//weighted graph
    vector<vector<int>> edges={{0,1,1},{1,2,3},{1,3,4},{2,3,5}};
    int V=4;

    vector<vector<pair<int,int>>> adj(V);

    for(auto edge:edges){
        int u =edge[0];
        int v=edge[1];
        int wt=edge[2];
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }

    //adjacency matrix
    
    vector<vector<int>> edges={{0,1},{1,2},{1,3},{2,3}};
    int V=4;
    int adjm[V][V];
    
    for(int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
            adjm[i][j]=0;
        }
    }

    for(auto edge:edges)
    {
        int u=edge[0];
        int v=edge[1];

        adjm[u][v]=1;
        adjm[v][u]=1;
    }

    vector<vector<int>> adj(V);
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++)
        {
            if(adjm[i][j])
            {
                adj[i].push_back(j);
            }
        }
    }
}