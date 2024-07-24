#include <vector>
#include <algorithm>

class Solution {
public:
    void func(int ind, std::vector<int> &temp, std::vector<int> &nums, int n, std::vector<std::vector<int>> &ans) {
        ans.push_back(temp);

        for (int i = ind; i < n; ++i) {
            // Skip duplicates
            if (i > ind && nums[i] == nums[i - 1]) continue;
            temp.push_back(nums[i]);
            func(i + 1, temp, nums, n, ans);
            temp.pop_back();
        }
    }

    std::vector<std::vector<int>> subsetsWithDup(std::vector<int>& nums) {
        std::vector<std::vector<int>> ans;
        std::vector<int> temp;
        int n = nums.size();

        // Sort the input array to handle duplicates
        std::sort(nums.begin(), nums.end());

        func(0, temp, nums, n, ans);

        return ans;
    }
};
