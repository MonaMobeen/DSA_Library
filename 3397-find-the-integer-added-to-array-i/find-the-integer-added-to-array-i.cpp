 

class Solution {
public:
    int addedInteger(const std::vector<int>& nums1, const std::vector<int>& nums2) {
     
        int min_nums1 = *std::min_element(nums1.begin(), nums1.end());
        int min_nums2 = *std::min_element(nums2.begin(), nums2.end());

     
        return min_nums2 - min_nums1;
    }
};
