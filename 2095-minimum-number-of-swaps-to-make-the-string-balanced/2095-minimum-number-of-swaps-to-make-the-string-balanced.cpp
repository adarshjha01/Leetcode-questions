class Solution {
public:
    int minSwaps(string s) {
        int ans=0;
        stack<char> st;

        for(int i=0;i<s.length();i++){
            char ch = s[i];
            if(ch=='[') st.push(ch);
            else {
                if(!st.empty()) st.pop();
                else ans++;
            }
        }

        return (ans+1)/2;
    }
};