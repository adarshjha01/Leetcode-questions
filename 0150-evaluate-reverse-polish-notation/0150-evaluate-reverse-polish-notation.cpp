class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int first = 0, second = 0;
        stack<int> st;

        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/") {
                second = st.top();
                st.pop();
                first = st.top();
                st.pop();

                if (tokens[i] == "+") {
                    st.push(first + second);
                } else if (tokens[i] == "-") {
                    st.push(first - second);
                } else if (tokens[i] == "/") {
                    st.push(first / second);
                } else if (tokens[i] == "*") {
                    st.push(first * second);
                }
            } else {
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};