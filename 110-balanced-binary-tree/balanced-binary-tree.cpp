class Solution {
public:
  bool isBalanced(TreeNode* root) {
    return checkHeightAndBalance(root) != -1;
  }

private:
  int checkHeightAndBalance(TreeNode* node) {
    if (!node) {
      return 0;  
    }

    int leftHeight = checkHeightAndBalance(node->left);
    int rightHeight = checkHeightAndBalance(node->right);

 
    if (std::abs(leftHeight - rightHeight) > 1 || leftHeight == -1 || rightHeight == -1) {
      return -1;  
    }

    return std::max(leftHeight, rightHeight) + 1;
  }
};
