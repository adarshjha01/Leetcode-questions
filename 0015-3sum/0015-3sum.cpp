class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end()); //sorting the array
        vector<vector<int>> ans; // to hold the answer
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]) continue; // we don't want i to be same in next iteration
            int j=i+1;
            int k=n-1;
            while(j<k){ // the moment j crossess k we break the loop as the array become unsorted and it will pick reused value which we don't want as constraint is unique triplets
            int sum=nums[i]+nums[j]+nums[k];
            if(sum<0) j++; // as if sum is negative then it needs to increase in order to reach 0
            else if (sum >0 ) k--; // is sum is +ve then it needs to decrease in order to reach 0
            else{
                vector<int> temp = {nums[i], nums[j], nums[k]};
                ans.push_back(temp); //we got our one triplet now find more
                j++;
                k--;
                while(j<k && nums[j]==nums[j-1]) j++; // we don't want same j for next triplet
                while(j<k && nums[k]==nums[k+1]) k--; // we don't want same k for next triplet
            }
            }
        }
        return ans;

    }
};