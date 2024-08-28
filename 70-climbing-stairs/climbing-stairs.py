class Solution:
    def climbStairs(self, n: int) -> int:
        one, two= 1, 1
        for i in range(n-1):
            dummy = one
            one = one + two
            two = dummy
        return one   #gonna love this dp 