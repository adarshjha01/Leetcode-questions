class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index=-1;
        int n=nums.size();
        // finding breaking point
        for ( int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]) {
                index=i;
                break;
            }
        }
        // if no breaking point then rev and return the array
        if(index==-1) {
            return (reverse(nums.begin(), nums.end()));
        }
        // if there exists some breaking point then swap it with the just greater than index element
        for ( int i=n-1;i>=0;i--){
            if(nums[i]>nums[index]){ 
                swap(nums[i], nums[index]);
                break;
            };
        }
        // sort the nums array from the point index+1;
        sort(nums.begin()+index+1, nums.end());
    }
};