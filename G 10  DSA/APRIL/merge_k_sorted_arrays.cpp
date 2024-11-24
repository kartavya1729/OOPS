vector<int> Solution::solve(vector<vector<int> > &arr) 
{

    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
    
    vector<int> ans;
    
    for(int i = 0; i < arr.size(); i++)
    {
        pq.push({arr[i][0],{i,0}});
    }
    
    while(!pq.empty())
    {
        auto t = pq.top();
        pq.pop();
        
        int val = t.first;
        int row = t.second.first, i = t.second.second;
        ans.push_back(val);

        if(i+1 < arr[row].size())
        {
            pq.push({arr[row][i+1],{row,i+1}});
        }
    }

    return ans;
}