class Solution {
public:
  bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int count = 0; // Count of flowers planted

    for (int i = 0; i < flowerbed.size(); ++i) {
      // Check if the current plot is empty and both adjacent plots are empty
      if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0)) {
        flowerbed[i] = 1; // Plant a flower
        count++;
        if (count >= n) {
          return true;
        }
      }
    }

    return count >= n;
  }
};
