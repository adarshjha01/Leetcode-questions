class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups; // Use a hash map for efficient lookups

        for (const string& str : strs) {
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());
            groups[sortedStr].push_back(str); // Add original string to the group
        }

        vector<vector<string>> ans;
        for (const auto& [key, value] : groups) {
            ans.push_back(value); // Add each group (vector of strings) to the result
        }

        return ans;
    }
};
