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
    
    int helper(TreeNode* root , int& maxSum){
        if(!root) return 0;
        int l = helper(root->left,maxSum);
        int r = helper(root->right,maxSum);
        
        if(l<0) l=0;
        if(r<0) r=0;
        
        if(l+r+root->val>maxSum)
            maxSum = l+r+root->val;
        if(l>r) 
            return root->val+l;
        else 
            return root->val+r;       
    }
    
    int maxPathSum(TreeNode* root) {
        if(!root) return 0;
        int maxSum = root->val;
        helper(root,maxSum);
        return maxSum;
    }
};