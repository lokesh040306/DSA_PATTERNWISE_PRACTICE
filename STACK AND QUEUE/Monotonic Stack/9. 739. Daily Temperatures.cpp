/*

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        // Monotonic Stack

        int n = temperatures.size();
        stack<int> st;
        vector<int> ans(n);

        for(int i = n - 1; i >= 0; i--) {

            // Pop elements from the stack until we find a warmer temperature
            while(!st.empty() && temperatures[st.top()] <= temperatures[i]) {
                st.pop();
            }

            // If the stack is empty, it means there is no warmer temperature ahead
            if(st.empty()) {
                ans[i] = 0;
            }
            else {
                // The difference in days to the next warmer temperature
                ans[i] = st.top() - i;
            }
            
            // Storing indexes to find the count
            st.push(i);
        }

        return ans;
    }
};

*/