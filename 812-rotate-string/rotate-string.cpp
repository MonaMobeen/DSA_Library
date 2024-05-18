class Solution {
public:
    bool rotateString(std::string s, std::string goal) {
  if (s.length() != goal.length()) {
    return false;  
  }

  std::string combined = s + s;  
  return combined.find(goal) != std::string::npos;  
}

};