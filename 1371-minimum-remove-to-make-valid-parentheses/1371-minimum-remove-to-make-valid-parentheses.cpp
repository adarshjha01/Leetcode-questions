class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n = s.length();
        vector<int> track(n, 0); // Track invalid parentheses positions
        stack<int> st; // Stack to track the index positions of '('

        // First pass: Track invalid closing parentheses
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                st.push(i); // Push index of '(' to stack
            } else if (s[i] == ')') {
                if (!st.empty()) {
                    st.pop(); // Valid pair, pop from stack
                } else {
                    track[i] = 1; // Mark invalid ')'
                }
            }
        }

        // Second pass: Track any remaining unmatched '('
        while (!st.empty()) {
            track[st.top()] = 1; // Mark invalid '('
            st.pop();
        }

        // Construct the valid string
        string ans;
        for (int i = 0; i < n; i++) {
            if (track[i] == 0) { // Only include valid characters
                ans += s[i];
            }
        }

        return ans;
    }
};