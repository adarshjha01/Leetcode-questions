class Solution:
    def maxScore(self, s: str) -> int:
        zeroCount, oneCount=0,0
        n = len(s)

        for i in range(n):
            if s[i] == '0':
                zeroCount+=1
            else:
                oneCount+=1
        
        ans, count = 0,0
        tempZero, tempOne = 0,0

        for i in range(n-1):
            if s[i]=='0':
                tempZero+=1
            else:
                tempOne+=1
            count = tempZero+oneCount-tempOne
            ans = max(ans, count)

        return ans

        