class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), [](unsigned char c) { return tolower(c); });
        set<string> acceptable = {
            "a", "b", "c", "d", "e", "f", "g", "h", 
            "i", "j", "k", "l", "m", "n", "o", "p", 
            "q", "r", "s", "t", "u", "v", "w", "x", 
            "y", "z", "0", "1", "2", "3", "4", "5",
            "6", "7", "8", "9"
        };
        string build = "";
        for (char& ch : s) {
            string str(1, ch);
            if (acceptable.contains(str)) {
                build += str;
            }
        }
        return equal(build.begin(), build.end(), build.rbegin());
    }
};
