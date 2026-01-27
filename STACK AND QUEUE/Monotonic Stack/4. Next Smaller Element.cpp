/*

class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        
        int n = arr.size();
        stack<int> st;
        vector<int> nse(n);
        
        for(int i = n - 1; i >= 0; i--) {
            
            // Pop elements from the stack until we find a smaller element or the stack becomes empty
            while(!st.empty() && st.top() >= arr[i]) {
                st.pop();
            }
            
            // If stack is empty, there is no smaller element to the right
            if(st.empty()) {
                nse[i] = -1;
            }
            else {
                nse[i] = st.top();
            }
            
            // Push the current element onto the stack
            st.push(arr[i]);
        }
        
        return nse;
    }
};

*/