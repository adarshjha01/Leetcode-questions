class Solution {
public:
    int minAddToMakeValid(string s) {
        int closing_bracket_count = 0;
        stack <char> st;

        for(int i=0; i<s.length(); i++){
            if(s[i]=='('){
                st.push('(');
            } else{
                if(!st.empty()){
                    st.pop();
                } else{
                    closing_bracket_count++;
                }
            }
        }

        return (st.size()+closing_bracket_count);
    }
};