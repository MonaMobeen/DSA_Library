class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
  int goodPairs = 0;
  std::unordered_map<int, int> count;

  
  for (int num : nums) {
    count[num]++;
  }

 
  for (const auto& [num, frequency] : count) {
     
    goodPairs += frequency * (frequency - 1) / 2;
  }

  return goodPairs;
}
};