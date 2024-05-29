 

class Solution {
public:
    int addedInteger(const std::vector<int>& nums1, const std::vector<int>& nums2) {
        // Find the minimum values in both arrays
        int min_nums1 = *std::min_element(nums1.begin(), nums1.end());
        int min_nums2 = *std::min_element(nums2.begin(), nums2.end());

        // The difference between minimum values represents the added integer
        return min_nums2 - min_nums1;
    }
};
