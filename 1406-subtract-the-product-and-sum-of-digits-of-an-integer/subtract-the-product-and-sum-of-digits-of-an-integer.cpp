class Solution {
public:
   
int subtractProductAndSum(int n) {
  int product = 1, sum = 0;
  while (n > 0) {
    int digit = n % 10; // Extract the last digit
    product *= digit;
    sum += digit;
    n /= 10; // Remove the last digit
  }
  return product - sum;
}

int main() {
  int num1 = 234;
  int num2 = 4421;
  std::cout << subtractProductAndSum(num1) << std::endl; // Output: 15
  std::cout << subtractProductAndSum(num2) << std::endl; // Output: 21
  return 0;
}

};