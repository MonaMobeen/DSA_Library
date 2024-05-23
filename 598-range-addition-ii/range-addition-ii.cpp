class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int min_row = m, min_col = n;

        for (const vector<int>& op : ops) {
            min_row = min(min_row, op[0]);  // Update minimum row
            min_col = min(min_col, op[1]);  // Update minimum column
        }

        return min_row * min_col;
    }
};
