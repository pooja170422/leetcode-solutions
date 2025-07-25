/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        bool leftRight = true;
        if (root == NULL) {
            return ans;
        }

        q.push(root);
        while (!q.empty()) {
            int n = q.size();
            vector<int> temp(n);
            for (int i = 0; i < n; i++) {
                TreeNode* node = q.front();
                q.pop();
                int idx=leftRight?i:n-i-1;
                temp[idx]=node->val;
                if(node->left){
                    q.push(node->left);

                }
                if(node->right){
                    q.push(node->right);
                }
            }
            leftRight = !leftRight;
            ans.push_back(temp);
        }
        return ans;
    }
};