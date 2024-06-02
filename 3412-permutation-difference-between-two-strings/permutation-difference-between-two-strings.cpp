class Solution {
public:
   int findPermutationDifference(string s, string t) {
  int n = s.size();
  int result = 0;
  vector<int> map(26, -1);  // Map character to its index in s

  // Store character positions in s
  for (int i = 0; i < n; ++i) {
    map[s[i] - 'a'] = i;
  }

  // Calculate difference for each character in t
  for (int i = 0; i < n; ++i) {
    result += abs(map[t[i] - 'a'] - i);
  }

  return result;
}

};