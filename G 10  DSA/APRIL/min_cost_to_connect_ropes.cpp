int Solution::solve(vector<int> &arr) 
{
    priority_queue<int,vector<int>,greater<int>> pq;

    for(int i:arr) pq.push(i);

    int cost = 0;

    while(pq.size() > 1)
    {
        
        int min1 = pq.top();
        pq.pop();

        int min2 = pq.top();
        pq.pop();

        cost += min1 + min2;
        pq.push(min1+min2);
    }
    return cost;
}