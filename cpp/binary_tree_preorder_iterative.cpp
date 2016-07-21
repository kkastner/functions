/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

    vector<int> preorderTraversal(TreeNode* root) {
    	stack<TreeNode*> nodeStack;
        vector<int> result;
        TreeNode *currNode = root;
        while(currNode != NULL) {
            result.push_back(currNode->val);
            while (currNode->left != NULL) {
                if (currNode->right != NULL) {
                    nodeStack.push(currNode->right);
                }
                currNode = currNode->left;
                result.push_back(currNode->val);
            }
            if (currNode->right != NULL) {
                currNode = currNode->right;
            } else if (!nodeStack.empty()) {
                currNode = nodeStack.top();
                nodeStack.pop();
            } else {
                currNode = NULL;
            }
        }
        return result;
    }