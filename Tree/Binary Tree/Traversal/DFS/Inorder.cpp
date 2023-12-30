// Inorder using recursion
#include<vector>
#include<iostream>
using namespace std;

class TreeNode {
    public:
        int val;
        TreeNode *left;
        TreeNode *right;

        TreeNode(int data) {
            this->val = data;
            this->left = NULL;
            this->right = NULL;
        }
};

class Solution
{
    void helper(TreeNode *root, vector<int> &ans)
    {

        if (root == NULL)
        {
            return;
        }
        helper(root->left, ans);
        ans.push_back(root->val);
        helper(root->right, ans);
    }

public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        helper(root, ans);
        return ans;
    }
};


// using Iterative method

