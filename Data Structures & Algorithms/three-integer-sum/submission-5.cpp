class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> out;
        for (int i = 0; i < nums.size(); i++) {
            // ati = -(atk + atj)
            int left = i + 1;
            int right = nums.size() - 1;
            vector<int> terms;
            while (left < right) {
                int ati = nums.at(i);
                int atj = nums.at(left);
                int atk = nums.at(right);
                int check = -(atk + atj);
                if (check > ati) {
                    left++;
                } else if (check < ati) {
                    right--;
                } else {
                    terms.push_back(ati);
                    terms.push_back(atj);
                    terms.push_back(atk);
                    if (!(terms.empty())) {
                        out.insert(terms);
                    }
                    terms = {};
                    left++;
                    right--;
                }
            }
        }
        vector<vector<int>> out2(out.begin(), out.end());
        return out2;
    }
};