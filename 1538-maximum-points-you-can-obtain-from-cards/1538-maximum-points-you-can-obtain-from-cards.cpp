class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int left=0,right=0,min_sum=INT_MAX, temp_sum=0, sum=0;
        for(int i=0;i<nums.size();i++) sum+=nums[i];
        int n=nums.size();
        while(right<n){
            temp_sum+=nums[right];
            if(right-left+1 > n-k){
                temp_sum-=nums[left];
                left++;
            }
            if(right-left+1== n-k)
            min_sum=min(min_sum,temp_sum);
            
            right++;
        }
        return sum-min_sum;

    }
};