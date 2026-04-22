class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int, int> seen = {};
        vector<int> result = {};
        for (int i = numbers.size() - 1; i >= 0; i--) {
            int matching = target - numbers.at(i);
            if (seen.contains(numbers.at(i))) {
                int j = seen.at(numbers.at(i));
                result.push_back(i + 1);
                result.push_back(j + 1);
                break;
            } else {
                seen.insert({matching, i});
            }
        }
        return result;
    }
};
