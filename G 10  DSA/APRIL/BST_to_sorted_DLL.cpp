Node* BSTToLL(Node* root)
{
    Node* dummy = new Node(-1);
    Node* prev = dummy;

    f(root,prev);
    return dummy->right;
}
void f(Node* root,Node* &prev)
{
    if(!root)
    {
        return;
    }

    f(root->left,prev);
    prev->right = root;
    root->left = prev;
    prev = root;

    f(root->right,prev);
}