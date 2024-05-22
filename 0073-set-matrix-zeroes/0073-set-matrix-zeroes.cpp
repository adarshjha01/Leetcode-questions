class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();

        vector <int> row(m,0); // initializing row vector with 0
        vector <int> col(n,0); // initializing col vector with 0

        for ( int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                if(matrix[i][j]==0)
                {
                    row[i]=1; // marking row and col with 1 if there's 0 
                    col[j]=1;
                }
            }
        }

        for ( int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                if(row[i] || col[j] ) matrix[i][j]=0; // replacing with 0 if any of the case is true.
            }
        }

    }
};