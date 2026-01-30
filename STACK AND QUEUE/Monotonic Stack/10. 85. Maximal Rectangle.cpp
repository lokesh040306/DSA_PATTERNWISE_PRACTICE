/*

class Solution {
    vector<int> nextSmallElement(vector<int> &heights, int n) {

        vector<int> nextLess(n);
        stack<int> st;

        for(int i = n - 1; i >= 0; i--) {

            while(!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }

            if(st.empty()) {
                nextLess[i] = n;
            }
            else {
                nextLess[i] = st.top();
            }

            st.push(i);
        }

        return nextLess;
    }

    vector<int> prevSmallElement(vector<int> &heights, int n) {

        vector<int> prevLess(n);
        stack<int> st;

        for(int i = 0; i < n; i++) {

            while(!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }

            if(st.empty()) {
                prevLess[i] = -1;
            }
            else {
                prevLess[i] = st.top();
            }

            st.push(i);
        }

        return prevLess;
    }

    int largestRectangleArea(vector<int>& heights) {
        
        // Monotonic Stack

        int n = heights.size();

        vector<int> prevLess(n);
        prevLess = prevSmallElement(heights, n);

        vector<int> nextLess(n);
        nextLess = nextSmallElement(heights, n);

        int area = 0;

        for(int i = 0; i < n; i++) {

            int height = heights[i];

            int width = nextLess[i] - prevLess[i] - 1;

            int newArea = height * width;

            area = max(area, newArea);
        }

        return area;
    }

public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        
        // Monotonic Stack

        // Convert 2D Binary Matrix to Histogram
        int n = matrix.size();  // rows
        int m = matrix[0].size();   // column

        // Create 2D array to store heights
        vector<vector<int>> arr(n, vector<int>(m, 0));

        // Build the histogram for each column
        for(int col = 0; col < m; col++) {
            int sum = 0;
            for(int row = 0; row < n; row++) {
                sum += matrix[row][col] - '0';
                
                // If we encounter a '0', reset the sum to 0
                if(matrix[row][col] - '0' == 0) {
                    arr[row][col] = 0;
                    sum = 0;
                }
                else {
                    arr[row][col] = sum;
                }
            }
        }

        // Now, find the largest rectangle area for each row in the histogram
        int maxArea = INT_MIN;
        for(int i = 0; i < n; i++) {

            int area = largestRectangleArea(arr[i]);

            maxArea = max(maxArea, area);
        }

        return maxArea;
    }
};

*/