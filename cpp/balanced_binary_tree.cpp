/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

    int maxHeight(TreeNode* node) {
        if (node == NULL) {
            return 0;
        }
        int leftChildHeight = maxHeight(node->left);
        if (leftChildHeight == -1) {
            return -1;
        }
        int rightChildHeight = maxHeight(node->right);
        if (rightChildHeight == -1) {
            return -1;
        }
        if (abs(leftChildHeight - rightChildHeight) > 1) {
            return -1;
        }
        return max(leftChildHeight, rightChildHeight) + 1;
    }
    bool isBalanced(TreeNode* root) {
        return maxHeight(root) != -1;
    }