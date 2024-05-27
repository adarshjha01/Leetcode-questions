class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end()); // sorted in order to move i,j,k,l pointers efficiently and easily
        vector<vector<int>> ans; //to hold the answer
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]== nums[i-1]) continue; //as same nums[i] produce same result
            for(int j=i+1;j<n;j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue; //same logic as i

                //2 pointers 
                int k=j+1;
                int l=n-1;
                while(k<l){
                long long sum = nums[i];
                sum += nums[j];
                sum += nums[k];
                sum += nums[l];
                    if(sum<target) k++; // as try adding the bigger no.
                    else if(sum>target) l--; //as it's in increasing order so we have to select the element lesser than current one in order to reduce the sum 
                    else{
                        vector<int> temp={nums[i], nums[j], nums[k], nums[l]};
                        ans.push_back(temp);
                        k++; 
                        l--;
                        while(k<l && nums[k]== nums[k-1]) k++;
                        while(k<l && nums[l]== nums[l+1]) l--;
                    }
                }
            }
        }
        return ans;
    }
};