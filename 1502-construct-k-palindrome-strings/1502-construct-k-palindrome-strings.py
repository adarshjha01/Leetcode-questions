class Solution:
    def canConstruct(self, s: str, k: int) -> bool:
        hash_map = {}
        for i in s:
            hash_map[i] = hash_map.get(i, 0) + 1
        
        odd_count = 0
        for value in hash_map.values():
            if value%2 == 1:
                odd_count += 1
        
        if odd_count > k or len(s) < k:
            return False
        
        return True
