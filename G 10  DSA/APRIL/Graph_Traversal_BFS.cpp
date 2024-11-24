#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

                                                            ////BFS traversal

vector<int> BFS(vector<vector<int>> &adj,int V)
{
    vector<bool> vis(V,false);
    queue<int> q;
    q.push(0);
    vis[0]=true;
    vector<int> ans;

    while(!q.empty())
    {
        int sz=q.size();
        while(sz--)
        {
            int node=q.front();
            q.pop();
            ans.push_back(node);
            // cout<<node;
            for(int nbr:adj[node]){
                if(!vis[nbr]){
                    q.push(nbr);
                    vis[nbr]=true;
                }
            }
        }
    }
    return ans;
}

void dfsHelper(int curr,vector<vector<int>>&adj,vector<bool>&vis
,vector<int>&ans){

    vis[curr]=true;
    ans.push_back(curr);
    for(int nbr:adj[curr]){
        if(!vis[nbr]){
            dfsHelper(nbr,adj,vis,ans);
        }
    }
}
vector<int> DFS(vector<vector<int>>&adj,int V){
    vector<bool> vis(V,false);
    vector<int> ans;
    dfsHelper(0,adj,vis,ans);
    return ans;
}


int main()
{
    vector<vector<int>> edges={{0,1},{0,2},{1,2},{1,3},{2,4},{3,4},{3,5}};
    int V=6;
    vector<vector<int>> adj(V);

    for(auto edge:edges){
        int u =edge[0];
        int v=edge[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<adj.size();i++){
        cout<<i<<" :";
        for(int j:adj[i]) cout<<j<<" ";
        cout<<endl;
    }

// cout<<endl;
    vector<int> bfs=BFS(adj,V);
    for(auto i:bfs) cout<<i<<" ";
    vector<int> dfs=DFS(adj,V);
    for(auto i:dfs) cout<<i<<" ";
    
    return 0;

}