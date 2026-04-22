class Solution {
public:
    bool isPalindrome(string s) {
        string raw = "";
        for (int i = 0; i < s.length(); i++) {
            if (std::isalnum(static_cast<unsigned char>(s[i]))) {
                char standard = (char) tolower(s[i]);
                raw += standard;
            }
        }
        string reversed(raw.rbegin(), raw.rend());
        if (reversed == raw) {
            return true;
        }
        return false;
    }
};
