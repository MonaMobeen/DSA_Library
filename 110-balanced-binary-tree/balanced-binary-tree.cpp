class Solution {
public:
  bool isBalanced(TreeNode* root) {
    return checkHeightAndBalance(root) != -1;
  }

private:
  int checkHeightAndBalance(TreeNode* node) {
    if (!node) {
      return 0; // Base case: Empty tree has height 0
    }

    int leftHeight = checkHeightAndBalance(node->left);
    int rightHeight = checkHeightAndBalance(node->right);

    // Check for imbalance: overall difference > 1 OR subtree imbalance
    if (std::abs(leftHeight - rightHeight) > 1 || leftHeight == -1 || rightHeight == -1) {
      return -1; // Indicate imbalance
    }

    return std::max(leftHeight, rightHeight) + 1;
  }
};
