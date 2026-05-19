/*

class Solution {
    bool solve(vector<int> &arr, int index, int n, vector<bool> &visited) {

        // Base case
        if(index < 0 || index >= n) {
            return false;
        }

        if(visited[index]) return false;

        if(arr[index] == 0) {
            return true;
        }

        // mark current element as visited
        visited[index] = true;

        int jump = arr[index];
        // Try forward jump
        bool leftSide = solve(arr, index + jump, n, visited);
        // Try backward jump
        bool rightSide = solve(arr, index - jump, n, visited);

        return leftSide || rightSide;
    }

public:
    bool canReach(vector<int>& arr, int start) {
        
        // Recursion
        int n = arr.size();
        vector<bool> visited(n, false);
        return solve(arr, start, n, visited);
    }
};

*/