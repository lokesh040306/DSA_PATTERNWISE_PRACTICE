/*

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        // Monotonic Stack

        int n = nums.size();
        stack<int> st;
        vector<int> nge(n);

        // Traverse the array twice in reverse order
        for(int i = (2*n - 1); i >= 0; i--) {

            // Pop elements from the stack until we find a greater element or the stack becomes empty
            while(!st.empty() && st.top() <= nums[i % n]) {
                st.pop();
            }

            // If we are in the first pass, record the next greater element
            if(i < n) {
                if(st.empty()) {
                    nge[i] = -1;
                }
                else {
                    nge[i] = st.top();
                }
            }

            // Push the current element onto the stack
            st.push(nums[i % n]);
        }

        return nge;
    }
};

*/