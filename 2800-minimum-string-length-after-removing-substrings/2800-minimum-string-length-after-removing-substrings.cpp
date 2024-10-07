class Solution {
public:
    int minLength(string s) {
        stack < char > st;
        int ans;

        for(int i=0; i<s.length(); i++){
            if(!st.empty() && (s[i]=='B' || s[i]=='D')){
                if(s[i]=='B' && st.top()=='A') st.pop();
                else if( s[i]=='D' && st.top()=='C') st.pop();
                else st.push(s[i]);
            }
            else st.push(s[i]);
        }

        ans = st.size();
        return ans;
    }
};