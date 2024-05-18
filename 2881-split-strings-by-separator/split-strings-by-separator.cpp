class Solution {
public:
  std::vector<std::string> splitWordsBySeparator(std::vector<string>& words, char separator) {
    std::vector<std::string> result;

    for (const std::string& word : words) {
      // Use a string stream for efficient tokenization
      std::stringstream ss(word);
      std::string token;

      // Split the word using the separator
      while (std::getline(ss, token, separator)) {
        // Ignore empty tokens
        if (!token.empty()) {
          result.push_back(token);
        }
      }
    }

    return result;
  }
};
