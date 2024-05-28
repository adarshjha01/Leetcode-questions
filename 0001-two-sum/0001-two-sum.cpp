#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> mp;
        std::vector<int> ans;

        // Populate the map with value as the key and index as the value
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            // Check if the complement exists in the map
            if (mp.find(complement) != mp.end()) {
                // If found, we have our answer
                ans.push_back(mp[complement]);
                ans.push_back(i);
                return ans;
            }

            // If not found, add the current element to the map
            mp[nums[i]] = i;
        }

        // Return empty vector if no solution is found
        return ans;
    }
};
