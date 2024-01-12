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

void nodeLabelValue(TreeNode *root, int l)
{
    queue<pair<TreeNode *, int>> q;
    if (root)
        q.push({root, 0});

    bool isPrint = false;
    while (!q.empty())
    {
        pair<TreeNode *, int> p = q.front();
        TreeNode *node = p.first;
        int level = p.second;
        q.pop();

        if (level == l)
        {
            cout << node->val << " ";
            isPrint = true;
        }

        if (node->left)
        {
            q.push({node->left, level + 1});
        }
        if (node->right)
        {
            q.push({node->right, level + 1});
        }
    }
    if (!isPrint)
    {
        cout << "Invalid";
    }
}

int main()
{
    TreeNode *root = input_tree();
    int level;
    cin >> level;
    nodeLabelValue(root, level);

    return 0;
};