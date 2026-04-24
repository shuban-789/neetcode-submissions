class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right  = nums.size() - 1;
        int mid = 0;
        while (left <= right) {
            mid = right - left / 2;
            if (nums.at(mid) > target) {
                right = mid - 1;
            }
            if (nums.at(mid) < target) {
                left = mid + 1;
            }
            if (nums.at(mid) == target) {
                return mid;
            }
        }
        return -1;
    }
};
