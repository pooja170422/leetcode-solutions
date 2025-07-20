/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    unordered_map<TreeNode*,TreeNode*>parent;
    void inorder(TreeNode* root){
        if(root==NULL){
            return;
        }
        if(root->left){
            parent[root->left]=root;
        }
        inorder(root->left);
        if(root->right){
            parent[root->right]=root;
        }
        inorder(root->right);
    }

    void find( TreeNode* target, int k,vector<int>&ans){
        queue<TreeNode* >q;
        q.push(target);
        unordered_set<int>visited;
        visited.insert(target->val);
        while(!q.empty()){
            int n=q.size();
            if(k==0){
                break;
            }
            while(n--){
               TreeNode*node=q.front();
               q.pop();
               if(node->left!=NULL  and !visited.count(node->left->val)) {
                q.push(node->left);
                visited.insert(node->left->val);
               }
               if(node->right!=NULL  and !visited.count(node->right->val)) {
                q.push(node->right);
                visited.insert(node->right->val);
               }
               if(parent.count(node)  and !visited.count(parent[node]->val)) {
                q.push(parent[node]);
                visited.insert(parent[node]->val);
               }
            }
            k--;
            
        }
        while(!q.empty()){
            TreeNode*temp=q.front();
            q.pop();
            ans.push_back(temp->val);
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int>ans;
        inorder(root);
        find(target,k,ans);
        return ans;
        
    }
};