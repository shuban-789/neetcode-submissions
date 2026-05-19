class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> result(matrix);
        int n = matrix.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                result.at(i).at(j) = matrix.at(n-1-j).at(i);
            }
        }
        matrix = result;
    }
};
