class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<int>> seen = {};
        for (int i = 0; i < strs.size(); i++) {
            string sorted = strs[i];
            sort(sorted.begin(), sorted.end());
            if (seen.contains(sorted)) {

                seen[sorted].push_back(i);
            } else {
                vector<int> newvec = {i};
                seen.insert({sorted, newvec});
            }
        }
        vector<vector<string>> result;
        for (auto& [key, indices] : seen) {
            vector<string> group;
            for (int idx : indices) {
                group.push_back(strs[idx]);
            }
            result.push_back(group);
        }
        return result;
    }
};
