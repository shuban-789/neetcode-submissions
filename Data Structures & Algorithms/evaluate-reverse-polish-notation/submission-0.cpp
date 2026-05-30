class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        if (tokens.empty()) { 
            return 0;
        }
        stack<int> st;
        for (const string& term : tokens) {
            if (term == "+" || term == "-" || term == "*" || term == "/") {
                if (st.size() == 1) {
                    return st.top();
                }
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int res = 0;
                if (term == "+") {
                    res = b + a;
                } else if (term == "-") {
                    res = b - a;
                } else if (term == "*") {
                    res = b * a;
                } else {
                    res = b / a;
                }
                st.push(res);
            } else {
                st.push(stoi(term));
            }
        }
        return st.empty() ? 0 : st.top();
    }
};
