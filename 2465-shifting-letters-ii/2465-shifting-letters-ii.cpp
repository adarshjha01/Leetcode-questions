class Solution {
public:
    void solve(string& s, vector<int>& shift) {
        for (int i = 0; i < s.size(); i++) {
            s[i] = (s[i] - 'a' + shift[i] % 26 + 26) % 26 + 'a';
        }
    }

    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int> shift(n, 0);

        for (auto& query : shifts) {
            int start = query[0];
            int end = query[1];
            int direction = query[2];

            shift[start] += (direction == 1 ? 1 : -1);
            if (end + 1 < n)
                shift[end + 1] -= (direction == 1 ? 1 : -1);
        }

        for (int i = 1; i < n; i++) {
            shift[i] += shift[i - 1];
        }

        solve(s, shift);

        return s;
    }
};