/*

class Solution {
    bool isPossible(int row, int col, int index, vector<vector<char>>& board, string word) {

        // Base case - if all characters are found
        if(index == word.length()) {
            return true;
        }

        // Out of bounds or character does not match
        if(row < 0 || col < 0 || row >= board.size() || col >= board[0].size() || board[row][col] != word[index]) {
            return false;
        }

        char ch = board[row][col];
        // mark as visited
        board[row][col] = '#';

        // explore in all 4 directions
        bool left = isPossible(row, col - 1, index + 1, board, word);
        bool down = isPossible(row + 1, col, index + 1, board, word);
        bool right = isPossible(row, col + 1, index + 1, board, word);
        bool up = isPossible(row - 1, col, index + 1, board, word);

        // check if any direction led to a solution
        bool found = left || down || right || up;

        // backtrack - unmark the cell
        board[row][col] = ch;

        return found;
    }

public:
    bool exist(vector<vector<char>>& board, string word) {
        
        // traverse the board
        for(int row = 0; row < board.size(); row++) {
            // traverse columns
            for(int col = 0; col < board[0].size(); col++) {
                // start searching from each cell
                if(isPossible(row, col, 0, board, word)) {
                    return true;
                }
            }
        }

        return false;
    }
};

*/