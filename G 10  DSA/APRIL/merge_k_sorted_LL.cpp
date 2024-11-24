class Solution 
{
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,
        greater<pair<int,ListNode*>>> pq;

        for(auto head:lists)
        {
            if(head!=NULL)
                pq.push({head->val,head});
        }

        ListNode* dummy=new ListNode(-1);
        ListNode* curr=dummy;

        while(!pq.empty())
        {
            auto top=pq.top();
            pq.pop();
            
            ListNode* node=top.second;
            curr->next=node;
            curr=node;

            if(node->next!=NULL)
            {
                pq.push({node->next->val,node->next});
            }

        }
        return dummy->next;
    }
};