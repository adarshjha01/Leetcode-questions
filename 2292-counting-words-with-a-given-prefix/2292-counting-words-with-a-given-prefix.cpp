class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        int n=pref.length();
        for( int i=0; i<words.size(); i++){
            string temp = words[i].substr(0,n);
            if (temp == pref) count++;
        }
        return count;
    }
};