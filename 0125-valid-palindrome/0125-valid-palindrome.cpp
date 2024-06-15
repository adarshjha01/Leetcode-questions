class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        for ( int i=0; i<s.length();i++){
            if(isalnum(s[i])) ans+=tolower(s[i]);
        }
        int n=ans.length();
        for ( int i=0;i<n/2 ; i++){
            if(ans[i]!=ans[n-1-i]) return false;
        }
        return true;
    }
};