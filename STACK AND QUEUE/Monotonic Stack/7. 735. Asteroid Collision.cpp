/*

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
        int n = asteroids.size();
        stack<int> st;

        for(int i = 0; i < n; i++) {

            // If the asteroid is moving to the right, push it onto the stack
            if(asteroids[i] > 0) {
                st.push(asteroids[i]);
            }
            else {
                // If the asteroid is moving to the left, check for collisions
                while(!st.empty() && (st.top() > 0) && (st.top() < abs(asteroids[i]))) {
                    st.pop();
                }

                // If the top of the stack is equal in size to the incoming asteroid, both explode
                if(!st.empty() && st.top() == abs(asteroids[i])) {
                    st.pop();
                }
                else if(st.empty() || st.top() < 0) {
                    st.push(asteroids[i]);
                }
            }
        }

        // Collecting the remaining asteroids from the stack
        vector<int> ans;
        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};

*/