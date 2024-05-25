 class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        // Create a hash map to store the index of each element in arr2
        unordered_map<int, int> elementIndices;
        for (int i = 0; i < arr2.size(); ++i) {
            elementIndices[arr2[i]] = i;
        }

        // Custom comparison function for sorting
        auto compare = [&elementIndices](int a, int b) {
            // Prioritize elements in arr2 based on their indices
            if (elementIndices.count(a) && elementIndices.count(b)) {
                return elementIndices[a] < elementIndices[b];
            } else if (elementIndices.count(a)) {
                // Elements in arr2 come before elements not in arr2
                return true;
            } else if (elementIndices.count(b)) {
                return false;
            } else {
                // Sort remaining elements (not in arr2) in ascending order
                return a < b;
            }
        };

        // Sort arr1 using the custom comparison function
        sort(arr1.begin(), arr1.end(), compare);

        return arr1;
    }
};
