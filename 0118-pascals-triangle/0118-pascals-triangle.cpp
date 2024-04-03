class Solution {
public:
    // generating row 
    vector<int> generateRow(int row){
        long long ans=1;
        vector<int> ansRow;
        //first element will definitely be one
        ansRow.push_back(1);
        // generating the row now
        for (int col=1; col<row;col++){
            ans *= (row-col);
            ans /= col;
            ansRow.push_back(ans);
        }
        return ansRow;
    }
    vector<vector<int>> generate(int numRows) {
        // declaration of ans vector
        vector<vector<int>> ans;
        for (int i=1;i<=numRows;i++ ){
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};