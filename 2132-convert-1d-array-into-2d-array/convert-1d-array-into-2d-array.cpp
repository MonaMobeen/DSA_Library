#include <vector>

class Solution {
public:
  std::vector<std::vector<int>> construct2DArray(const std::vector<int>& original, int m, int n) {
    // Check if the total elements are enough to form the desired 2D array
    if (original.size() != m * n) {
      return {};  // Return empty vector if not possible
    }

    std::vector<std::vector<int>> result(m, std::vector<int>(n));  // Initialize 2D array
    int index = 0;  // Track the index in the original array

    // Fill the 2D array row by row
    for (int i = 0; i < m; ++i) {
      for (int j = 0; j < n; ++j) {
        result[i][j] = original[index++];
      }
    }

    return result;
  }
};
