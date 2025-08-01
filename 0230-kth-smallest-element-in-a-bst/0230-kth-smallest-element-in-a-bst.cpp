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
    vector<int>arr;
public:
    int kthSmallest(TreeNode* root, int k) {
        Inorder(root);
        return arr[k-1];



        
    }
 public:
  void Inorder(TreeNode* rt)
 {
     if(rt!=NULL)
     {
        Inorder(rt->left);
        arr.push_back(rt->val);
        Inorder(rt->right);
        
     }
 }
};