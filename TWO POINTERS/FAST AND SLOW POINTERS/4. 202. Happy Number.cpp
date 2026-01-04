/*

class Solution {
private:
    // Function to calculate the sum of squares of each individual digits
    int getNext(int n) {
        int sum = 0;
        while(n > 0) {
            int rem = n % 10;
            sum += rem * rem;
            n = n / 10;
        }
        return sum;
    }

public:
    bool isHappy(int n) {
        
        // FAST AND SLOW POINTER APPROACH

        int slow = n;
        int fast = n;

        while(slow != 1 && fast != 1) {

            slow = getNext(slow);

            fast = getNext(getNext(fast));

            // Condition to check whether the cycle or not
            if(slow == fast && slow != 1) {
                return false;
            }
        } 

        return true;
    }
};

*/