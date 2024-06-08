class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans;
        int count=0;
        int n=nums.size();
        for (int i=0;i<nums.size();i++){
            count =0;
            int j=(i+1)%n;
            int ans_size = ans.size();
            while(count!=n-1){
                if(nums[j]>nums[i]){
                    ans.push_back(nums[j]);
                    break;
                }
                j=(j+1)%n;
                count++;
            }
            if(ans_size==ans.size()) ans.push_back(-1);
        }
        return ans;
    }
};