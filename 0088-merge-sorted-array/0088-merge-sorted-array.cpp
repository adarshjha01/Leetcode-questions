class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1; // i for iteration in nums1 from middle 
        int j = n-1; // j for iteration in nums2 from last
        int k = m+n-1; // also for iteration in nums1 but from back

        while(j>=0){
            if(i>=0 && nums1[i]>=nums2[j]){
               nums1[k]=nums1[i];
                i--;
                k--;
            }
            else{
               
                  nums1[k]=nums2[j];
                j--;
                k--;
            }
        }
    }
};