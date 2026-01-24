/*

Approach: 1

class Solution {
    bool isPossible(int row, int col, vector<string> &board, int n) {

        // store the copy of row and col
        int copyRow = row;
        int copyCol = col;

        // searching the upper diagonal
        while(row >= 0 && col >= 0) {
            if(board[row][col] == 'Q') return false;
            row--;
            col--;
        }

        // searching the left side
        row = copyRow;
        col = copyCol;
        while(col >= 0) {
            if(board[row][col] == 'Q') return false;
            col--;
        }

        // searching the lower diagonal
        row = copyRow;
        col = copyCol;
        while(row < n && col >= 0) {
            if(board[row][col] == 'Q') return false;
            row++;
            col--;
        }

        return true;
    }

    void solve(int col, vector<vector<string>> &ans, vector<string> &board, int n) {

        // Base case - all queens are placed
        if(col == n) {
            ans.push_back(board);
            return ;
        }

        // placing the queen in all rows one by one
        for(int row = 0; row < n; row++) {
            // check if it's safe to place the queen
            if(isPossible(row, col, board, n)) {
                board[row][col] = 'Q';
                solve(col + 1, ans, board, n);
                board[row][col] = '.';
            }
        }
    }

public:
    vector<vector<string>> solveNQueens(int n) {
        
        // RECURSION
        vector<vector<string>> ans;
        // initializing the chess board
        vector<string> board(n);

        // creating an empty string of size n with all '.'
        string s(n, '.');
        // filling the board with empty strings
        for(int i = 0; i < n; i++) {
            board[i] = s;
        }

        solve(0, ans, board, n);
        return ans;
    }
};

*/