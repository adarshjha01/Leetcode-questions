class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for ( int i =0;i<nums.size();i++){
            int tofind=target-nums[i];
            if(mp.find(tofind)!=mp.end()) {
                return {mp[tofind]+1,i+1};
            }
            mp[nums[i]]=i;
        }
        return {-1,-1};
    }
};