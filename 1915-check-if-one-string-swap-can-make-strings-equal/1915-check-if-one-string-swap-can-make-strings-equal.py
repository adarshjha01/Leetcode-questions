class Solution:
    def areAlmostEqual(self, s1: str, s2: str) -> bool:
        
        diff1 = -1
        diff2 = -1

        for i in range(len(s1)):
            if s1[i] != s2[i]:
                if diff1 == -1:
                    diff1 = i
                elif diff2 == -1:
                    diff2 = i
                else:
                    return False

        return s1[diff1] == s2[diff2] and s2[diff1] == s1[diff2]
