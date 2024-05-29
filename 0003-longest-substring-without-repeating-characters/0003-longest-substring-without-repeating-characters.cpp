class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen=0; 
        int n=s.length();
        for (int l =0;l<n;l++){
            int r=l;
            unordered_map<char,int> mp;
            while(r<n){
                if(mp.find(s[r])!=mp.end()) break;
                mp[s[r]]++;
                r++;
            }
            maxlen=max(maxlen,r-l);
        }
        return maxlen;

    }
};