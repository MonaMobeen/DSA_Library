class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for (int length = 1; length <= n / 2; length++) {
             
            if (n % length == 0) {
                 
                string substring = s.substr(0, length);

               
                bool isMultiple = true;
                for (int i = length; i < n; i += length) {
                    if (s.substr(i, length) != substring) {
                        isMultiple = false;
                        break;
                    }
                }

                // If a multiple is found, return true
                if (isMultiple) {
                    return true;
                }
            }
        }

        // No repeated substring found
        return false;
    }
};
