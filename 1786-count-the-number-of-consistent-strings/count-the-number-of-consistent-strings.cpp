class Solution {
public:
  int countConsistentStrings(std::string allowed, std::vector<std::string>& words) {
    int count = 0;
    std::unordered_set<char> allowedChars(allowed.begin(), allowed.end());  

    for (const std::string& word : words) {
      bool isConsistent = true;
      for (char c : word) {
        if (allowedChars.count(c) == 0) {  
          isConsistent = false;
          break;  
        }
      }
      if (isConsistent) {
        count++;
      }
    }

    return count;
  }
};
