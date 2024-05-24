class Solution {
public:
  string toLowerCase(string s) {
    string result = "";
    for (char c : s) {
      // Check if uppercase (ASCII 'A' to 'Z')
      if (isupper(c)) {
        // Convert to lowercase by adding 32 (difference between uppercase and lowercase ASCII)
        result += c + 32;
      } else {
        result += c;
      }
    }
    return result;
  }
};
