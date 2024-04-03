#include <bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        // first we'll sort the array
        sort(arr.begin(), arr.end());

        vector<vector<int>> ans;
        // applying condition
        for ( int i=0;i<arr.size();i++){
            // if the condition [1,3] and [2,6] is not true;
            if(ans.empty() || ans.back()[1]< arr[i][0]) ans.push_back(arr[i]);

            // if the current interval lies in the last interval;
            else ans.back()[1]=max(ans.back()[1], arr[i][1]);
        }
        return ans;
    }
};