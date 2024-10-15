class Solution {
public:
    long long minimumSteps(string s) {
        long long ans = 0;
        int countOnes = 0; 

        for(char c : s) {
            if(c == '1') {
                countOnes++; 
            } else if(c == '0') {
                ans += countOnes; 
            }
        }

        return ans;
    }
};