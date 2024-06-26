class Solution {
public:
vector<int> productExceptSelf(vector<int>& nums) {
        long long product=1;
        int flag=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                flag++;
                continue;
            }
            product*=nums[i];
        }

        vector<int> ans;
        for ( int i=0;i<nums.size();i++){
            int divisor=nums[i];
            if(divisor==0 && flag==1) ans.push_back(product);
            else{
                if(flag==0) ans.push_back(product/divisor);
                else ans.push_back(0);
            }
        }

        return ans;
    }
};