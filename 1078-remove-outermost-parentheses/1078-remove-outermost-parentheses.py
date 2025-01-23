class Solution:
    def removeOuterParentheses(self, s: str) -> str:
        stack = []
        ans = ""

        for char in s:
            if char == '(':
                if stack:
                    ans += '('
                stack.append('(')

            else:
                stack.pop()
                if stack:
                    ans += ')'
            
        return ans