#include <vector>

class Solution {
public:
  std::vector<std::vector<int>> construct2DArray(const std::vector<int>& original, int m, int n) {
    
    if (original.size() != m * n) {
      return {};   
    }

    std::vector<std::vector<int>> result(m, std::vector<int>(n));   
    int index = 0;   
 
    for (int i = 0; i < m; ++i) {
      for (int j = 0; j < n; ++j) {
        result[i][j] = original[index++];
      }
    }

    return result;
  }
};
