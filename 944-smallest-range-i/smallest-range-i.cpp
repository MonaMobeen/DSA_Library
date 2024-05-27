class Solution {
public:
  int smallestRangeI(vector<int>& nums, int k) {
    if (nums.empty()) {
      return 0; 
    }

     
    int minVal = INT_MAX, maxVal = INT_MIN;
    for (int num : nums) {
      minVal = std::min(minVal, num);
      maxVal = std::max(maxVal, num);
    }

 
    int diff = maxVal - minVal;

 
    if (diff <= 2 * k) {
      return 0;  
    } else {
    
      return diff - 2 * k;
    }
  }
};
