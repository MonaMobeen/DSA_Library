class Solution {
public:
  bool divisorGame(int n) {
    // Base cases: Bob wins if n is 1, Alice wins if n is even
    if (n == 1) {
      return false;  // Bob wins if n is 1 (no move for Alice)
    } else if (n % 2 == 0) {
      return true;   // Alice wins if n is even
    }

    // Bob wins if n is odd and greater than 1
    return false;
  }
};

