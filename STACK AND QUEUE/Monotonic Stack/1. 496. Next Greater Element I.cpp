/*

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        // Create a map to store the next greater element for each number in nums2
        unordered_map<int, int> nge;
        stack<int> st;

        for(int i = nums2.size() - 1; i >= 0; i--) {

            // Pop elements from the stack until we find a greater element or the stack becomes empty
            while(!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }

            // If the stack is not empty, the top element is the next greater element
            if(!st.empty()) {
                nge[nums2[i]] = st.top();
            }
            else {
                nge[nums2[i]] = -1;
            }

            // Push the current element onto the stack
            st.push(nums2[i]);
        }
        
        // Prepare the result for nums1 based on the nge map
        vector<int> ans;
        for(int num : nums1) {
            ans.push_back(nge[num]);
        }
            
        return ans;
    }
};

*/