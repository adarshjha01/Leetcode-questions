class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int a=nums[0], b=INT_MAX, c=a;
        int n=nums.size();

        for(int i=1;i<n;i++){
            if(nums[i]<a) a=nums[i];
            else if(nums[i]<b && nums[i]>a){
                b=nums[i];
                c=a;
            }
            else if(nums[i]>b) return true;
        }
        return false;
    }
};