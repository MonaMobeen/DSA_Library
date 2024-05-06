class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxAltitude = 0;
        int currentAltitude = 0;
 
        vector<int> prefixSum(gain.size() + 1, 0);
        for (int i = 0; i < gain.size(); ++i) {
            prefixSum[i + 1] = prefixSum[i] + gain[i];
        }
 
        for (int altitude : prefixSum) {
            maxAltitude = max(maxAltitude, altitude);
        }

        return maxAltitude;
    }
};