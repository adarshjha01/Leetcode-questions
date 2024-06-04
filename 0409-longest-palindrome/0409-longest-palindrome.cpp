class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        for ( int i =0; i<s.length();i++){
            mp[s[i]]++;
        }
        int count=0;
        int flag=0;
        for (auto it: mp){
            if(it.second%2==1){
                flag=1;
                count+=it.second-1;
            }
            else{
                count+=it.second;
            }
        }
        count+= flag;
        return count;
    }
};