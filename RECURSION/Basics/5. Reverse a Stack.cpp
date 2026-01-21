/*


class Solution {
    void insertAtBottom(stack<int> &st, int x) {
        
        // Base case
        if(st.empty()) {
            st.push(x);
            return ;
        }
        
        // Processing
        int num = st.top();
        st.pop();
        
        // Recursive Relation
        insertAtBottom(st, x);
        
        // Insert current element back
        st.push(num);
    }
    
  public:
    void reverse(stack<int> &St) {
        
        // Base case
        if(St.empty()) {
            return ;
        }
        
        // Processing 
        int num = St.top();
        St.pop();
        
        // Recursive Relation
        reverse(St);
        
        // Insert at bottom
        insertAtBottom(St, num);
    }
};

*/