class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        set<char> startings = {'[', '(', '{'};
        map<char, char> pairings = { {']', '['}, {'}', '{'}, {')', '('} };
        if (s.length() % 2 != 0) {
            return false;
        }
        for (char c : s) {
            if (startings.contains(c)) {
                st.push(c);
            } else if (st.empty() != true) {
                if (pairings.at(c) != st.top()) {
                    return false;
                } else {
                    st.pop();
                }
            } else {
                return false;
            }
        }
        if (st.empty()) { 
            return true;
        }    
        return false;
    }
};
