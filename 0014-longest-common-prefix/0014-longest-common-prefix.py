class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        s = sorted(strs) #sorted doesnot modify original list unlike c++
        first = s[0]
        last = s[-1]
        ans = ""

        for i in range(len(first)):
            if first[i] == last[i]:
                ans += first[i]
            else:
                break
        
        return ans