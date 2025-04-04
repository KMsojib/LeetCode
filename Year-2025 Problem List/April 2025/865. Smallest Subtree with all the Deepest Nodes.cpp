# Problem          : 865. Smallest Subtree with all the Deepest Nodes
# Time Complexity  : O(N)
# Space Complexity : O(maxDepth)
# C++ / Python Solution

class Solution {
public:
    int maxDepth = 0;
    unordered_map<int, int> mp;

    TreeNode* LCA(TreeNode* root) {
        if (root == NULL || mp[root->val] == maxDepth) {
            return root;
        }

        TreeNode* left = LCA(root->left);
        TreeNode* right = LCA(root->right);

        if (left && right) {
            return root;
        }

        return left != NULL ? left : right;
    }

    void Find_depth(TreeNode* root, int depth) {
        if (!root) {
            return;
        }

        maxDepth = max(maxDepth, depth);
        mp[root->val] = depth;
        Find_depth(root->left, depth + 1);
        Find_depth(root->right, depth + 1);
    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        Find_depth(root, 0);
        return LCA(root);
    }
};