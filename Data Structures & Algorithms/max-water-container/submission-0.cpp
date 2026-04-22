class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int max = 0;
        while (left < right) {
            int area = min(heights.at(right), heights.at(left)) * (right - left);
            if (area > max) {
                max = area;
            }
            if (heights.at(left) > heights.at(right)) {
                right--;
            } else {
                left++;
            }
        }
        return max;
    }
};
