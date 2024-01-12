#include <bits/stdc++.h>
using namespace std;

#define ll long long

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

TreeNode *input_tree()
{
    int val;
    cin >> val;
    TreeNode *root;

    if (val == -1)
        root = NULL;
    else
        root = new TreeNode(val);

    queue<TreeNode *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        // 1. Catch item from queue;
        TreeNode *p = q.front();
        q.pop();

        // 2. Do something by this root.
        int l, r;
        cin >> l >> r;
        TreeNode *left, *right;

        if (l == -1)
            left = NULL;
        else
            left = new TreeNode(l);

        if (r == -1)
            right = NULL;
        else
            right = new TreeNode(r);

        p->left = left;
        p->right = right;

        // 3. Push the child in this queue.
        if (left)
            q.push(left);
        if (right)
            q.push(right);
    }
    return root;
}

void printLeft(TreeNode *root)
{
    if (root->left)
    {
        printLeft(root->left);
    }
    else if (root->right)
    {
        printLeft(root->right);
    }
    cout << root->val << " ";
}

void printRight(TreeNode *root)
{
    cout << root->val << " ";
    if (root->right)
    {
        printRight(root->right);
    }
    else if (root->left)
    {
        printRight(root->left);
    }
}

void printOuterSide(TreeNode *root)
{
    if (root->left)
        printLeft(root->left);
    cout << root->val << " ";
    if (root->right)
        printRight(root->right);
}

int main()
{
    TreeNode *root = input_tree();
    printOuterSide(root);
    return 0;
};