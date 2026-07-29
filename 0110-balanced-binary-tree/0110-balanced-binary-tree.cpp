class Solution {
private:
    int checkHeight(TreeNode *node){
        if (node == nullptr) return 0;

        int lheight = checkHeight(node->left);
        int rheight = checkHeight(node->right);
        
        if (lheight == -1) return -1;
        if (rheight == -1) return -1;

        if (abs(rheight - lheight) > 1) return -1;

        return max(lheight, rheight) + 1;
    }
public:
    bool isBalanced(TreeNode* root) {
        return checkHeight(root) != -1;
    }
};