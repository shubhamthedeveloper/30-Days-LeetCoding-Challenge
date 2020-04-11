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
   
//APPROACH 1
    /*
    int height(TreeNode* root){
        if(root==NULL)
            return 0;
        return 1+ max(height(root->left),height(root->right));
    }
    
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL)
            return 0;
        int opt1 = height(root->left)+height(root->right);
        int opt2 = diameterOfBinaryTree(root->left);
        int opt3 = diameterOfBinaryTree(root->right);
        return max(opt1,max(opt2,opt3));
    }
    */


// Better Solution 
    
    int maxheight=0;
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        getheight(root);
        return maxheight;
    }
    int getheight(TreeNode* root){
        if(root==NULL) return 0;
        int lheight = getheight(root->left);
        int rheight = getheight(root->right);
        maxheight = max(maxheight,lheight+rheight);
        return max(lheight,rheight)+1;
    }
    
};