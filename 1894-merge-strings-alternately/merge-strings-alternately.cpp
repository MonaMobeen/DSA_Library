class Solution {
public:
  std::string mergeAlternately(std::string word1, std::string word2) {
    std::string merged;
    int i = 0, j = 0;

    // Iterate until both strings are exhausted or one is completely added
    while (i < word1.size() && j < word2.size()) {
      merged += word1[i];
      i++;
      merged += word2[j];
      j++;
    }

    // Append remaining characters from the longer string
    merged += word1.substr(i);
    merged += word2.substr(j);

    return merged;
  }
};
