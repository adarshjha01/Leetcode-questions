class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int left=0;
        int right=0;
        int mid = nums1.size()-1;
        int high = nums2.size()-1;

        while(left<=mid && right<=high){
            if(nums1[left]<=nums2[right]){
                ans.push_back(nums1[left]);
                left++;
            }
            else{
                ans.push_back(nums2[right]);
                right++;
            }
        }
        
        while(left<=mid){
            ans.push_back(nums1[left]);
            left++;
        }

        while(right<=high){
            ans.push_back(nums2[right]);
            right++;
        }

        int n=ans.size();
        if(n%2!=0) return double(ans[n/2]);
        return (double(ans[n/2])+ double(ans[(n/2)-1]))/2;
    }
};