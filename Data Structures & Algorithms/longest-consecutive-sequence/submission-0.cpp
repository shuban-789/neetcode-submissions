class Solution {
public:
    int longestConsecutive(std::vector<int>& nums) {
        if (nums.empty()) return 0;
        set<int> numset(nums.begin(), nums.end());
        map<int, int> threads;
        int max_streak = 0;

        for (int num : numset) {
            if (numset.find(num - 1) == numset.end()) {
                threads[num] = 1;
                
                int current = num;
                while (numset.find(current + 1) != numset.end()) {
                    current++;
                    threads[num]++;
                }
                
                max_streak = std::max(max_streak, threads[num]);
            }
        }
        
        return max_streak;
    }
};