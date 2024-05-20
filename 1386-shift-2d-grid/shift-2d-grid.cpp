 class Solution {
public:
  vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
    int m = grid.size();
    int n = grid[0].size();
    k %= m * n;
    std::vector<int> temp;
    for (int i = 0; i < m; ++i) {
      for (int j = 0; j < n; ++j) {
        temp.push_back(grid[i][j]);
      }
    }

    std::rotate(temp.rbegin(), temp.rbegin() + k, temp.rend());
 
    int index = 0;
    for (int i = 0; i < m; ++i) {
      for (int j = 0; j < n; ++j) {
        grid[i][j] = temp[index++];
      }
    }

    return grid;
  }
};
