class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;
        dfs(root, "", paths);
        return paths;
    }

private:
    void dfs(TreeNode* node, string currentPath, vector<string>& paths) {
        if (node == nullptr) {
            return;
        }

        // Append current node value to path
        currentPath += to_string(node->val);

        // Check if leaf node (no children)
        if (node->left == nullptr && node->right == nullptr) {
            paths.push_back(currentPath);
            return;
        }

        // Recursively explore left and right subtrees
        if (node->left) {
            dfs(node->left, currentPath + "->", paths);
        }
        if (node->right) {
            dfs(node->right, currentPath + "->", paths);
        }
    }
};
