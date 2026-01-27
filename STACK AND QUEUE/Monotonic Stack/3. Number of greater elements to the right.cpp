/*


class Solution {
    
    int nge(vector<int> &arr, int index) {

        stack<int> st;
    
        for (int i = arr.size() - 1; i > index; i--) {
    
            // Remove elements not greater than arr[idx]
            while(!st.empty() && st.top() <= arr[index]) {
                st.pop();
            }
    
            // Push only if current element is greater
            if(arr[i] > arr[index]) {
                st.push(arr[i]);
            }
        }
    
        return st.size();
    }

  public:

    vector<int> count_NGE(vector<int> &arr, vector<int> &indices) {
        
        // Monotonic Stack

        vector<int> ans;
    
        for(int i = 0; i < indices.size(); i++) {
            int count = nge(arr, indices[i]);
            ans.push_back(count);
        }
    
        return ans;
    }
};

*/