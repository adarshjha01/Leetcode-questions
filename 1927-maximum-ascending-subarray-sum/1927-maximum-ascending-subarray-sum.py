class Solution:
    def maxAscendingSum(self, nums: List[int]) -> int:
        ans = 0
        sum = nums[0]
        n = len(nums)

        for i in range(n):
            if i < n-1 and nums[i] < nums[i+1]:
                sum += nums[i+1]
            else:
                ans = max(ans, sum)
                if i < n-1:
                    sum = nums[i+1]
        
        return ans