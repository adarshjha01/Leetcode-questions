class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int start=0;
        int end=(m*n)-1;
        // Binary search
        while(start <= end){
            int mid = start +(end-start)/2;
            if(matrix[mid/n][mid%n]==target) // catch to find mid element :)
            return true;
            if(matrix[mid/n][mid%n] < target)
            start=mid+1;
            else
            end=mid-1;
        }
        return false;
    }
};