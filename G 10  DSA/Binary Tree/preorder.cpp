#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        data = d;
        left = nullptr;
        right = nullptr;
    }
};

Node *buildTree()
{
    // root Node
    int data;
    cout << "Enter data: ";
    cin >> data;

    // recursive base condition : data = -1
    if (data == -1)
    {
        return nullptr;
    }
    Node *root = new Node(data);

    // left subtree
    root->left = buildTree();

    // right subtree
    root->right = buildTree();

    return root;
}
int main(int argc, char const *argv[])
{
    Node *root = buildTree();
    cout << root->data;
    return 0;
}