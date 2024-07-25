class Solution {
public:

 void func(int ind, int target, vector<int> &temp, vector<vector<int>> &ans, vector<int> &arr, int n){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(ind==n || arr[ind]>target ) return;
        temp.push_back(arr[ind]);
        func(ind+1, target-arr[ind],temp, ans, arr, n);
        temp.pop_back();
        while(ind+1<n && arr[ind]==arr[ind+1]) ind++;
        func(ind+1, target, temp, ans, arr, n);
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        
         vector<int> temp;
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        int n= arr.size();
        func(0,target,temp,ans,arr,n);
        return ans; 
    }
};