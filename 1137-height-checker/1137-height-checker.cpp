class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector <int> expected;
        expected=heights;
        sort(expected.begin(), expected.end()); // as mentioned in the question
        int ans=0; // to hold the output
        for (int i=0; i<heights.size();i++){ // running a loop to calculate the ans
            if(heights[i]!=expected[i]) ans++;
        }
        return ans;
        
    }
};