/*

class Solution {
    vector<int> nextSmallElement(vector<int> &heights, int n) {

        vector<int> nextLess(n);
        stack<int> st;

        for(int i = n - 1; i >= 0; i--) {

            // Pop elements from the stack until we find a smaller element
            while(!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }

            // If the stack is empty, it means there is no smaller element to the right
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

            // Pop elements from the stack until we find a smaller element
            while(!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }

            // If the stack is empty, it means there is no smaller element to the left
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
public:
    int largestRectangleArea(vector<int>& heights) {
        
        // Monotonic Stack

        int n = heights.size();

        // Previous Smaller Element
        vector<int> prevLess(n);
        prevLess = prevSmallElement(heights, n);

        // Next Smaller Element
        vector<int> nextLess(n);
        nextLess = nextSmallElement(heights, n);

        int area = 0;
        for(int i = 0; i < n; i++) {

            int height = heights[i];

            // Width = Next Smaller - Previous Smaller - 1
            int width = nextLess[i] - prevLess[i] - 1;

            int newArea = height * width;

            area = max(area, newArea);
        }

        return area;
    }
};

*/