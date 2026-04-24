class Solution {
public:

    string encode(vector<string>& strs) {
        string out = "";
        for (const string& s : strs) {
            for (char c : s) {
                out += (char)(c - 1);
            }
            out += (char)255; 
        }
        return out;
    }

    vector<string> decode(string s) {
        vector<string> result;
        string current = "";
        
        for (char c : s) {
            if ((unsigned char)c == 255) {
                result.push_back(current);
                current = "";
            } else {
                current += (char)(c + 1);
            }
        }
        return result;
    }
};
