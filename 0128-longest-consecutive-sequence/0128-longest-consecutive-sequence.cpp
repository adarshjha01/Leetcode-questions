class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int > st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        int longestStreak=0;
        for(int num:nums){
            if(!st.count(num-1)){
                int currentNum = num;
                int currentStreak=1;
                while(st.count(currentNum+1)){
                    currentNum++;
                    currentStreak++;
                }
                longestStreak= max(longestStreak, currentStreak);
            }


        }
        return longestStreak;
    }
};