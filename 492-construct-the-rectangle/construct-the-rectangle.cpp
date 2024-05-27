class Solution {
public:
  vector<int> constructRectangle(int area) {
    int width = sqrt(area); // Start with the largest possible width (square root of area)

    // Iterate down from the square root until a divisor is found
    while (area % width != 0) {
      width--;
    }

    return {area / width, width};
  }
};
