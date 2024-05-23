class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m = img.size();
        int n = img[0].size();
        vector<vector<int>> result(m, vector<int>(n, 0)); // Create result matrix

        // Iterate through each cell of the image
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int count = 0; // Count of valid neighbors
                int sum = 0;    // Sum of valid neighbor values

                // Check surrounding cells (including itself)
                for (int x = i - 1; x <= i + 1; x++) {
                    for (int y = j - 1; y <= j + 1; y++) {
                        // Check if within image bounds and add to sum
                        if (0 <= x && x < m && 0 <= y && y < n) {
                            sum += img[x][y];
                            count++;
                        }
                    }
                }

                // Calculate average (rounded down) and store in result
                result[i][j] = sum / count;
            }
        }

        return result;
    }
};
