class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        unordered_map<int, pair<int, int>> mp;
        vector<int> row_count(m, n), col_count(n, m);

        for( int i = 0; i < m; i++){
            for ( int j = 0; j < n; j++){
                int key = mat[i][j];
                mp[key] = {i, j};
            }
        }

        for ( int i = 0; i < arr.size(); i++){
            auto [row, col] = mp[arr[i]];
            if ( --row_count[row] == 0 || --col_count[col] == 0 ){
                return i;
            }
        }

        return -1;
    }
};