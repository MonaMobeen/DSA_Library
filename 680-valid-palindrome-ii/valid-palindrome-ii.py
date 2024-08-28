class Solution:
    def validPalindrome(self, s: str) -> bool:
        l, r = 0, len(s)-1
        while l<r:
            if s[l] != s[r]:
                lSkip, rSkip = s[l + 1 : r + 1], s[l:r]
                return (lSkip == lSkip[::-1]) or (rSkip == rSkip[::-1])
            l += 1
            r -=1    
        return True 