class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> set1(nums1.begin(), nums1.end());
        set<int> set2(nums2.begin(), nums2.end());

        vector<int> different1, different2;

 
        for (int num : set1) {
            if (set2.find(num) == set2.end()) {
                different1.push_back(num);
            }
        }

 
        for (int num : set2) {
            if (set1.find(num) == set1.end()) {
                different2.push_back(num);
            }
        }

        return {different1, different2};
    }
};