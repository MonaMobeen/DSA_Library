class Solution:
    def isValid(self, s: str) -> bool:
        stack =  []
        closeToOpen = { ")" : "(" , "}" : "{" , "]" : "[" }

        for c in s:
            if c in closeToOpen:
                if stack and stack[-1] == closeToOpen[c]:   # this made me confused but i got it later
                  stack.pop()
                else:  
                   return False
            else:
                stack.append(c)
        return True if not stack else False            
