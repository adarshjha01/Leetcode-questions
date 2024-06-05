class Solution {
public:
    bool isValid(string s) {
        stack<int> st;// which will hold the opening brackets only
        for (int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[') st.push(s[i]);
            else{
                if(st.empty()) return false; // encountered the closed bracket initially
                char temp = st.top(); // for comparison of elements
                st.pop();
                if(s[i]==')' && temp=='(' || s[i]=='}' && temp=='{' || s[i]==']' && temp=='[' );// good to go as the last opened bracket has the first  closing bracket 
                else return false;
            }
        }
        if(st.empty()) return true;
        return false;

    }
};