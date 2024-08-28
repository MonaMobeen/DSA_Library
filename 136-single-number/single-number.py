class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        com = 0
        for i in nums:
            com = i ^ com
        return com    