class Solution:
    def reverseWords(self, s: str) -> str:
        stack = []
        ans = ""
        i = 0

        while i < len(s):
            if s[i] != " ":
                temp = ""
                while i < len(s) and s[i] != " ":
                    temp += s[i]
                    i += 1
                stack.append(temp)
            else:
                i += 1
        
        while stack:
            # ans += stack[-1]
            # ans += " "
            # stack.pop()
            ans += stack.pop() + " "

        return ans.strip()