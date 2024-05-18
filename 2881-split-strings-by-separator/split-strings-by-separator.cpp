class Solution {
public:
  std::vector<std::string> splitWordsBySeparator(std::vector<string>& words, char separator) {
    std::vector<std::string> result;

    for (const std::string& word : words) {
 
      std::stringstream ss(word);
      std::string token;

      
      while (std::getline(ss, token, separator)) {
   
        if (!token.empty()) {
          result.push_back(token);
        }
      }
    }

    return result;
  }
};
