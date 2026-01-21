/*

class Solution {
    void sortedInsert(stack<int> &st, int x) {
        
        // base case 
        if(st.empty() || (!st.empty() && st.top() <= x)) {
            st.push(x);
            return ;
        }
        
        // Processing
        int num = st.top();
        st.pop();
        
        // Recursive Relation
        sortedInsert(st, x);

        // Insert current element back
        st.push(num);
    }
    
  public:
    void sortStack(stack<int> &st) {
        
        // Base case
        if(st.empty()){
            return ;
        }
        
        // Processing
        int num = st.top();
        st.pop();
        
        // Recursive Relation
        sortStack(st);
        
        // Insert in sorted order
        sortedInsert(st, num);
    }
};


*/