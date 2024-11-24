// RECURSIVE
class Solution 
{
public:
    vector<int> rightSideView(TreeNode* root) 
    {
        vector<int> ans;
        int mxlevel = -1;
        f(root, 0, mxlevel, ans);
        return ans;
    }

    void f(TreeNode* root,int currlevel,int &mxlevel,vector<int>&ans)
    {
        if(!root) return;

        if(currlevel > mxlevel)
        {
            ans.push_back(root->val);
            mxlevel = currlevel;
        }

        f(root->right, currlevel+1, mxlevel, ans);
        f(root->left, currlevel+1, mxlevel, ans);
    }
};