#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
  int isPrefixOfWord(std::string sentence, std::string searchWord) {
    // Split the sentence into words using a stringstream
    std::istringstream iss(sentence);
    std::vector<std::string> words;
    std::string word;

    while (std::getline(iss, word, ' ')) {
      words.push_back(word);
    }

    // Check each word for a matching prefix
    for (int i = 0; i < words.size(); ++i) {
      if (words[i].size() >= searchWord.size() &&
          words[i].substr(0, searchWord.size()) == searchWord) {
        return i + 1; // Return 1-indexed index
      }
    }

    return -1; // No prefix found
  }
};
