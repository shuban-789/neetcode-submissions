class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) { return false; };
        for (int i = 0; i < s.length(); i++) {
            int count1 = std::count(s.begin(), s.end(), s[i]);
            int count2 = std::count(t.begin(), t.end(), s[i]);
            if (count1 != count2) {
                return false;
            }
        }
        return true;
    }
};
