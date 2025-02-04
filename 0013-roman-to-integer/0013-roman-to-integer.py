class Solution:
    def romanToInt(self, s: str) -> int:
        n = len(s)
        ans = 0
        mp = {}

        mp['I'] = 1
        mp['V'] = 5
        mp['X'] = 10
        mp['L'] = 50
        mp['C'] = 100
        mp['D'] = 500
        mp['M'] = 1000

        for i in range(n):
            if i < n-1 and mp[s[i]] < mp[s[i+1]]:
                ans -= mp[s[i]]
            else:
                ans += mp[s[i]]
        
        return ans

