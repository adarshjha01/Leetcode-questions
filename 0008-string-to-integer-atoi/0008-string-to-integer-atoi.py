class Solution:
    def myAtoi(self, s: str) -> int:
        temp = s.strip()
        if not temp:  
            return 0

        flag = 1  
        i = 0
        if temp[0] == "-":
            flag = -1
            i += 1
        elif temp[0] == "+":  
            i += 1

        ans = 0
        while i < len(temp) and temp[i].isdigit():
            ans = ans * 10 + int(temp[i])
            i += 1

        return max(-2**31, min(flag * ans, 2**31 - 1))  