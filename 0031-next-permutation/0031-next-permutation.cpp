class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index=-1;
        int n=nums.size();
        // finding breaking point from backwards
        for ( int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]) { //finding break point
                index=i;
                break;
            }
        }
        // if no breaking point then rev and return the array
        if(index==-1) {
            return (reverse(nums.begin(), nums.end()));
        }
        // if there exists some breaking point then swap it with the just greater than index element
        for ( int i=n-1;i>=0;i--){ // iteration from backwards
            if(nums[i]>nums[index]){ // the moment element is greater than nums [i] swap it
                swap(nums[i], nums[index]);
                break;
            };
        }
        // sort the nums array from the point index+1;
        sort(nums.begin()+index+1, nums.end());
    }
};