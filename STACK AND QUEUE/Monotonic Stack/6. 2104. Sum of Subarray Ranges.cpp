/*

class Solution {
    long long sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        int MOD = 1e9 + 7;

        vector<int> prevLess(n), nextLess(n);
        stack<int> st;

        // finding previous smaller elements array
        for(int i = 0; i < n; i++) {
            while(!st.empty() && arr[st.top()] > arr[i]) {
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

        // Making stack empty for reuse
        while(!st.empty()) st.pop();

        // findimg next smaller elements array
        for(int i = n - 1; i >= 0; i--){
            while(!st.empty() && arr[st.top()] >= arr[i]) {
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

        // finding the contributions of all the subarrays
        long long sum = 0;
        for(int i = 0; i < n; i++) {
            long long left = i - prevLess[i];
            long long right = nextLess[i] - i;
            sum += (long long)arr[i] * left * right;
        }

        return sum;
    }

    long long sumSubarrayMaxs(vector<int>& arr) {
        int n = arr.size();
        int MOD = 1e9 + 7;

        vector<int> prevGreater(n), nextGreater(n);
        stack<int> st;

        // finding previous smaller elements array
        for(int i = 0; i < n; i++){
            while(!st.empty() && arr[st.top()] < arr[i]) {
                st.pop();
            }
            
            if(st.empty()) {
                prevGreater[i] = -1;
            }
            else {
                prevGreater[i] = st.top();
            }

            st.push(i);
        }

        // Making stack empty for reuse
        while(!st.empty()) st.pop();

        // findimg next smaller elements array
        for(int i = n - 1; i >= 0; i--){
            while(!st.empty() && arr[st.top()] <= arr[i]) {
                st.pop();
            }
            
            if(st.empty()) {
                nextGreater[i] = n;
            }
            else {
                nextGreater[i] = st.top();
            }

            st.push(i);
        }

        // finding the contributions of all the subarrays
        long long sum = 0;
        for(int i = 0; i < n; i++) {
            long long left = i - prevGreater[i];
            long long right = nextGreater[i] - i;
            sum += (long long)arr[i] * left * right;
        }

        return sum;
    }

public:
    long long subArrayRanges(vector<int>& nums) {
        return sumSubarrayMaxs(nums) - sumSubarrayMins(nums);
    }
};

*/