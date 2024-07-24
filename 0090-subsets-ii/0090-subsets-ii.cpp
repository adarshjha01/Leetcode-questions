class Solution {
public:

    void func(int ind, vector<int> &temp, vector<int> &nums, int n, set<vector<int>> &st){
        if(ind==n){
            st.insert(temp);
            return;
        }
        temp.push_back(nums[ind]);
        func(ind+1, temp, nums, n, st);
        temp.pop_back();
        func(ind+1, temp, nums, n, st);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> st;
        vector<int> temp;
        int n=nums.size();
        sort(nums.begin(), nums.end());
        func(0,temp,nums,n,st);

        for(auto it: st){
            ans.push_back(it);
        }
        return ans;

    }
};