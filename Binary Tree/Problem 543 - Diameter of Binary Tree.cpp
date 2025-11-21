// Given the root of a binary tree, return the length of the diameter of the tree.

// The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

// The length of a path between two nodes is represented by the number of edges between them.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans=0;
    int Height(TreeNode* root)
    {
        if (root == NULL)
        {
            return 0;
        }
        int left = Height(root->left);
        int right = Height(root->right);
        ans= max((left+right), ans);

        return max(left,right)+ 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        Height(root);
        return ans;

    }
};
