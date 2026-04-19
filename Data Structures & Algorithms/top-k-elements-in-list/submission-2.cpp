class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result = {};
        map<int, int> frequencies = {};
        for (int i = 0; i < nums.size(); i++) {
            if (frequencies.contains(nums[i])) {
                frequencies[nums[i]] = frequencies[nums[i]] + 1;
            } else {
                frequencies.insert({nums[i], 0});
            }
        }
        vector<std::pair<int, int>> entries(frequencies.begin(), frequencies.end());
        std::ranges::sort(entries, [](const auto& a, const auto& b) { return a.second > b.second; });
        result.reserve(std::min(k, (int)entries.size()));
        transform(entries.begin(), entries.begin() + std::min(k, (int)entries.size()), std::back_inserter(result), [](const auto& p) { return p.first; });
        return result;
    }
};
