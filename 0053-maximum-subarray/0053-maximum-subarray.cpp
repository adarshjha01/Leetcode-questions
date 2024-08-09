class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int left=0 , right =0;
        int maxsum=INT_MIN;
        int sum=0;
        while(right<nums.size()){
            sum+= nums[right];
            right++;
            maxsum= max(maxsum, sum);
            if(sum<0){
                sum=0;
                left++;
                right=left;
            }
            
        }
        return maxsum;
    }
};