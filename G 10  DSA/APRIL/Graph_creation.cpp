int main()
{
    ///EDGE LIST REPRESENTATION
    vector<vector<int>> edges={{0,1},{1,2},{1,3},{2,3}};
    int V=4;
    /////adjacency list using vector
    vector<vector<int>> adj(V);

    for(auto edge:edges)
    {
        int u=edge[0];
        int v=edge[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    ////adjacency list using map
    unordered_map<int,vector<int>> adjm;
    for(auto edge:edges){
        int u=edge[0];
        int v=edge[1];
        adjm[u].push_back(v);
        adjm[v].push_back(u);
    }

    //directed edge
    vector<vector<int>> adjd(V);

    for(auto edge:edges){
        int u=edge[0];
        int v=edge[1];
        adj[u].push_back(v);
    } 
    
}
