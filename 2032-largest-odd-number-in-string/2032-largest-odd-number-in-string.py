"""
import sys
sys.set_int_max_str_digits(100000)

class Solution:
    def largestOddNumber(self, num: str) -> str:
        ans = 0
        temp = ""

        for char in num:
            temp += char
            ans = max(ans, int(temp) if int(temp)%2 == 1 else 0 )
        
        if ans == 0:
            return ""
        
        return str(ans)
        
"""

class Solution:
    def largestOddNumber(self, num:str) -> str:
        for i in range(len(num)-1, -1, -1):
            if num[i] in "13579":
                return num[:i+1]
        
        return ""