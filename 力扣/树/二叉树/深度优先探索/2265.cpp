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

    pair<int, int> dfs(TreeNode* tn) {
        if (!tn) return {0, 0};

        auto left = dfs(tn->left);
        auto right = dfs(tn->right);

        int sum = tn->val + left.first + right.first;
        int num = 1 + left.second + right.second;

        if (sum / num == tn->val) {
            ans++;
        }

        return {sum, num};
    }

    int averageOfSubtree(TreeNode* root) {
        dfs(root);
        return ans;
    }
};
