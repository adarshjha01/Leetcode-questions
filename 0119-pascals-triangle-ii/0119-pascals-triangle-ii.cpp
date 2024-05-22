class Solution {
public:
    vector<int> getRow(int row) {
        row++; // for considering the index as 1
        vector <int> ans; // to hold the ans
        long long el=1; // first element will always be 1

        ans.push_back(el); // added first element to the ans

        for ( int i=1;i<row;i++){
            el *= (row-i); // generating element 
            el /= i;
            ans.push_back(el); 
        }
        return ans; 
    }
};