class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
          unordered_map<int,int> mp;
          for ( auto it: nums1) mp[it]++;
            vector<int> ans;
          for( int i=0;i<nums2.size();i++){
            if(mp.find(nums2[i])!=mp.end()) {
                mp[nums2[i]]--;
                ans.push_back(nums2[i]);
                if(mp[nums2[i]]==0) mp.erase(nums2[i]);
                }
          }
          return ans;
    }
};