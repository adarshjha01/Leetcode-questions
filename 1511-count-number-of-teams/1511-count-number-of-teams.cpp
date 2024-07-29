class Solution {
public:
    int numTeams(vector<int>& rating) {
        int count = 0;
        int n = rating.size();
        
        for (int i = 1; i < n - 1; ++i) {
            int leftLess = 0, rightGreater = 0; // For increasing sequence
            int leftGreater = 0, rightLess = 0; // For decreasing sequence
            
            // Calculate leftLess and rightGreater
            for (int j = 0; j < i; ++j) {
                if (rating[j] < rating[i]) leftLess++;
                else if (rating[j] > rating[i]) leftGreater++;
            }
            
            for (int j = i + 1; j < n; ++j) {
                if (rating[j] > rating[i]) rightGreater++;
                else if (rating[j] < rating[i]) rightLess++;
            }
            
            count += leftLess * rightGreater; // Increasing sequence
            count += leftGreater * rightLess; // Decreasing sequence
        }
        
        return count;
    }
};
