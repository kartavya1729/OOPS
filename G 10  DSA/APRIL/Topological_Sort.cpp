#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;


vector<int> topologicalSortBFS(vector<vector<int>>&adj,int V)
{
    vector<bool> vis(V,false);
    vector<int> topo;
    
    vector<int> indeg(V,0);
    for(int i=0;i<V;i++)
    {
        for(int j:adj[i])
        {
            indeg[j]++;
        }
    }
    queue<int> q;
    
    for(int i=0;i<V;i++)
    {
        if(indeg[i]==0) q.push(i);
    }
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        topo.push_back(node);
        
        for(int nbr:adj[node])
        {
            indeg[nbr]--;
            if(indeg[nbr]==0)
            {
                q.push(nbr);
            }
        }
    }
    
    return topo;
}


void dfsHelper(int curr,vector<vector<int>>&adj,vector<bool>&vis
,vector<int>&topo){
 
    vis[curr]=true;
    
    for(int nbr:adj[curr]){
        if(!vis[nbr]){
            dfsHelper(nbr,adj,vis,topo);
        }
    }
    topo.push_back(curr);
}




vector<int> topologicalSortDFS(vector<vector<int>>&adj,int V){
    vector<bool> vis(V,false);
    vector<int> topo;
    for(int i=0;i<V;i++){
        if(!vis[i])
            dfsHelper(i,adj,vis,topo);
    }
    
    reverse(topo.begin(),topo.end());
    
    return topo;
}



int main(){
    vector<vector<int>> edges={{5,2},{5,0},{4,0},{4,1},{2,3},{3,1}};
    int V=6;
    vector<vector<int>> adj(V);

    for(auto edge:edges){
        int u =edge[0];
        int v=edge[1];
        adj[u].push_back(v);
        // adj[v].push_back(u);
    }
    
    vector<int> topoSort=topologicalSortDFS(adj,V);
    
    for(int i:topoSort) cout<<i<<" ";
    cout<<endl;
    
    vector<int> topoSortbfs=topologicalSortBFS(adj,V);
    
    for(int i:topoSortbfs) cout<<i<<" ";
    
    
    // for(int i=0;i<adj.size();i++){
    //     cout<<i<<" :";
    //     for(int j:adj[i]) cout<<j<<" ";
    //     cout<<endl;
    // }

// cout<<endl;
    // vector<int> bfs=BFS(adj,V);
    // for(auto i:bfs) cout<<i<<" ";
    // cout<<endl;
    // vector<int> dfs=DFS(adj,V);
    // for(auto i:dfs) cout<<i<<" ";
    
    return 0;

}