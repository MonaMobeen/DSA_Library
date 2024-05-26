 class Solution {
public:
  int prefixCount(const std::vector<std::string>& words, const std::string& pref) {
    int count = 0;
 
    for (const std::string& word : words) {
      
      if (word.size() >= pref.size()) {
   
        if (word.substr(0, pref.size()) == pref) {
          count++;
        }
      }
    }

    return count;
  }
};
