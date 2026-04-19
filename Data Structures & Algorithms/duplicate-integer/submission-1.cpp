class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> seen = {};
        for (int i = 0; i < nums.size(); i++) {
            if (seen.contains(nums[i])) {
                return true;
            } else {
                seen.insert({nums[i], i});
            }
        }
        return false;
    }
};