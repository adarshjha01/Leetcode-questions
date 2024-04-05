class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;// for counting of ones
        int ans=0; // for answer 
        for ( int i=0;i<nums.size();i++){
            if( nums[i]==1) {
                count++;
                ans=max(ans,count); // if there's 0 then count will be zero but before that it will be stored in ans;
            }
            else count=0;
        }
        return ans;
    }
};