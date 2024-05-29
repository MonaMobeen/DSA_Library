class Solution:
  def sumOfTheDigitsOfHarshadNumber(self, x):
    """
    Checks if a given integer is a Harshad number and returns the sum of its digits if it is.

    Args:
        x: An integer representing the number to be checked.

    Returns:
        The sum of digits of x if it's a Harshad number, otherwise -1.
    """
    sum_of_digits = 0
    original_x = x
    while x > 0:
      digit = x % 10
      sum_of_digits += digit
      x //= 10

    if original_x % sum_of_digits == 0:
      return sum_of_digits
    else:
      return -1

# Example usage:
number = 18
solution = Solution()  # Create an instance of the Solution class
result = solution.sumOfTheDigitsOfHarshadNumber(number)
print(result)  # Output: 9
