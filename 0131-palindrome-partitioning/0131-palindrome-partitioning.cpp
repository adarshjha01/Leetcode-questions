class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1;
        while (left < right) {
            if (s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }

    void func(int start, string &s, vector<string> &currentPartition, vector<vector<string>> &ans) {
        if (start == s.size()) {
            ans.push_back(currentPartition);
            return;
        }

        for (int end = start; end < s.size(); ++end) {
            string substring = s.substr(start, end - start + 1);
            if (isPalindrome(substring)) {
                currentPartition.push_back(substring);
                func(end + 1, s, currentPartition, ans);
                currentPartition.pop_back(); // backtrack
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> currentPartition;
        func(0, s, currentPartition, ans);
        return ans;
    }
};
