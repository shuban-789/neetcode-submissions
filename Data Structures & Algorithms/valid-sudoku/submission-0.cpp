class Solution {
public:
    bool checkRows(vector<vector<char>>& board) {
        for (int x = 0; x < board.size(); x++) {
            set<char> colDup;
            for (int y = 0; y < board[0].size(); y++) {
                char character = board[x][y];
                if (character == '.') {
                    continue;
                }
                if (colDup.contains(character)) {
                    return false;
                }
                colDup.insert(character);
            }
        }
        return true;
    }
    bool checkColumns(vector<vector<char>>& board) {
        for (int x = 0; x < board[0].size(); x++) {
            set<char> colDup;
            for (int y = 0; y < board.size(); y++) {
                char character = board[y][x];
                if (character == '.') {
                    continue;
                }
                if (colDup.contains(character)) {
                    return false;
                }
                colDup.insert(character);
            }
        }
        return true;
    }
    bool checkSquares(vector<vector<char>>& board) {
        vector<set<char>> squareDup(9);
        for (int x = 0; x < board.size(); x++) {
            for (int y = 0; y < board[0].size(); y++) {
                char value = board[x][y];
                if (value == '.') {
                    continue;
                }
                int idx = (x / 3) * 3 + (y / 3);
                if (squareDup[idx].contains(value)) {
                    return false;
                }
                squareDup[idx].insert(value);
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        return (checkRows(board) && checkColumns(board) && checkSquares(board));
    }
};
