class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen=0; // to hold the maximum length of the string
        int n=s.length(); // string length
        for (int l =0;l<n;l++){ // iteration over the loop 
            int r=l;
            unordered_map<char,int> mp;
            while(r<n){ // inner loop
                if(mp.find(s[r])!=mp.end()) break; // if the element is in the map then break form inner loop and calulate the length 
                mp[s[r]]++; // if element is not there push it into the map
                r++; // increase the pointer 
            }
            maxlen=max(maxlen,r-l); // update the length of maxlen is element is there in the map
        }
        return maxlen; // returns answer
    }
};