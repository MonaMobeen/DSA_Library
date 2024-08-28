class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        m = 0
        for l in range(len(nums)):
           if nums[l]!= val:
              nums[m] = nums[l]
              m+=1
        return m