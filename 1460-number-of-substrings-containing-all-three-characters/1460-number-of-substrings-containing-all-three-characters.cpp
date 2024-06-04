class Solution {
public:
    int numberOfSubstrings(string s) {
        //minimal window concept 
        int minimal_window=0,count=0;
        vector<int> lastSeen(3,-1);
        int i=0;
        while (i < s.length()){
            lastSeen[s[i]-'a'] =i;
            minimal_window=min(lastSeen[0],min(lastSeen[1],lastSeen[2]));
            count+=minimal_window+1;
            i++;
        }
        return count;
    }
};