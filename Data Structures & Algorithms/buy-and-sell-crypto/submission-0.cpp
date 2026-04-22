class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) {
            return 0;
        }
        int right = 1;
        int left = 0;
        int max = 0;
        while (right < prices.size()) {
            int profit = prices.at(right) - prices.at(left);
            if (profit > max) { 
                max = profit;
            }
            if (prices.at(left) > prices.at(right)) {
                left = right;
            }
            right++;
        }
        return max;
    }
};
