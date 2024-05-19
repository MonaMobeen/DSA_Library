class Solution {
public:
    int finalValueAfterOperations(const vector<string>& operations) {
  int count = 0;
  for (const string& op : operations) {
    if (op == "++X" || op == "X++") {
      count++;
    } else if (op == "--X" || op == "X--") {
      count--;
    }
  }
  return count;
}

int main() {
  vector<string> operations = {"--X", "X++", "X++"};
  int final_value = finalValueAfterOperations(operations);
  cout << "Final value: " << final_value << endl;
  return 0;
}
};