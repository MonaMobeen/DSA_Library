class Solution {
public:
  int sumRootToLeaf(TreeNode* root) {
    int sum = 0;
    return dfs(root, 0, sum);
  }

private:
  int dfs(TreeNode* node, int pathValue, int& sum) {
    if (!node) {
      return 0;  
    }

    
    pathValue = (pathValue << 1) | node->val;

  
    if (!node->left && !node->right) {
      sum += pathValue;
    }

     
    dfs(node->left, pathValue, sum);
    dfs(node->right, pathValue, sum);

    return sum; 
  }
};
