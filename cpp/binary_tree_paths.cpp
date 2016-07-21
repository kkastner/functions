/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        if (root == NULL) {
            return result;
        }
        string value = to_string(root->val);
        if (root->left == NULL && root->right == NULL) {
            result.push_back(value);
        } else {
            if (root->left != NULL) {
                vector<string> leftVec = binaryTreePaths(root->left);
                result.reserve(result.size() + distance(leftVec.begin(),leftVec.end()));
                result.insert(result.end(),leftVec.begin(),leftVec.end());
            }
            if (root->right != NULL) {
                vector<string> rightVec = binaryTreePaths(root->right);
                result.reserve(result.size() + distance(rightVec.begin(),rightVec.end()));
                result.insert(result.end(),rightVec.begin(),rightVec.end());
            }
            for (vector<string>::iterator it = result.begin(); it != result.end(); it++) {
                *it = value + "->" + *it;
            }
        }
        return result;
    }