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
    
    bool isValid (TreeNode* root,vector<int>& arr,int index ){
       int n = arr.size();
        if(root->val != arr[index])
            return false;
        
        if(index == n-1) 
            return ((root->left == nullptr) && (root->right == nullptr));
        
        if((root->left != nullptr) && isValid(root->left , arr,index+1))
        return true;
       
        if((root->right != nullptr) && isValid(root->right , arr,index+1))
        return true;
       
        return false;
    }
    
    
    bool isValidSequence(TreeNode* root, vector<int>& arr) {
        if(root == nullptr) return (arr.size() == 0);
        
        return isValid(root,arr,0);
    }
};