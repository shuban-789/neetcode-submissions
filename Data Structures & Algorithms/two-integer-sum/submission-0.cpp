class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result = {};
        map<int, int> seen = {};
        for (int i = 0; i < nums.size(); i++) {
            if (seen.contains(target - nums[i])) {
                if (seen.at(target - nums[i]) != i) {
                    result.insert(result.begin(), seen.at(target - nums[i]));
                    result.insert(result.begin()+1, i);
                }
            } else {
                seen.insert({nums[i], i});
            }
        }
        return result;
    }
};
