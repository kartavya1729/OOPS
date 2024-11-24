class Solution 
{
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) 
    {
        int idx=0;
        unordered_map<int,int> mp;

        for(int i=0; i<inorder.size(); i++)
        {
            mp[inorder[i]]=i;
        }

        return f(0,inorder.size()-1,idx,preorder,inorder,mp);
    }

    TreeNode* f(int s,int e,int &idx,vector<int>preorder,vector<int> inorder,unordered_map<int,int>&mp)
    {
        if(s>e)
        {
            return NULL;
        }

        int i=mp[preorder[idx]];
        TreeNode* root=new TreeNode(preorder[idx]);
        idx++;

        root->left = f(s, i-1, idx, preorder, inorder, mp);
        root->right=f( i+1, e, idx, preorder, inorder, mp);
        
        return root;
    }
};