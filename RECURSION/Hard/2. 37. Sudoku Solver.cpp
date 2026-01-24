/*

class Solution {
    bool isPossible(vector<vector<char>>& board, int row, int col, char ch) {

        // check in row, column and 3x3 sub-box
        for(int i = 0; i < 9; i++) {
            // search in a row
            if(board[i][col] == ch) {
                return false;
            }

            // search in a column
            if(board[row][i] == ch) {
                return false;
            }

            // search in 3x3 sub-box
            int boxRow = 3 * (row / 3);
            int boxCol = 3 * (col / 3);
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    // If character found in sub-box, not valid
                    if (board[boxRow + i][boxCol + j] == ch) {
                        return false;
                    }
                }
            }
        }

        return true;
    }

    bool solve(vector<vector<char>>& board) {

        // traverse the board
        for(int row = 0; row < board.size(); row++) {
            // traverse columns
            for(int col = 0; col < board[0].size(); col++) {

                // empty cell
                if(board[row][col] == '.') {

                    // try placing characters from '1' to '9'
                    for(char ch = '1'; ch <= '9'; ch++) {
                        if(isPossible(board, row, col, ch)) {
                            board[row][col] = ch;

                            // recursive call
                            if(solve(board) == true) {
                                return true;
                            }
                            else {
                                board[row][col] = '.';
                            }
                        }
                    }

                    // if no character can be placed, return false
                    return false;
                }
            }
        }

        return true;
    }

public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};

*/