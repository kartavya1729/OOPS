class Solution 
{
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) 
    {
        int V=numCourses;
        vector<vector<int>> adj(V);

        for(auto i:prerequisites)
        {
            adj[i[1]].push_back(i[0]);
        }
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
        vector<int> temp;
        return (topo.size()==V)?topo:temp;
    }
};