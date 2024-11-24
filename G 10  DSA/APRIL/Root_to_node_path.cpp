vector<int> getPath(Node* root,Node* node)
{
    vector<int>ans;
    f(root,node,ans);
    return ans;
}
bool f(Node* root,Node* node,vector<int>&ans)
{
    if(!root)return false;
    
    if(root==node)
    {
        ans.push_back(root->val);
        return true;
    }

    bool l = f(root->left,node, ans);
    bool r = f(root->right,node, ans);

    if(l || r)
    {
        ans.push_back(root->val);
        return true;    
    }

    return false;
}