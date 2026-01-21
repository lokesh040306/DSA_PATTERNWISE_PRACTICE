/*

class Solution {
private:
    double power(double x, long long num) {

        // Base case
        if(num == 0) return 1.0;

        // Recursive case 
        double half = power(x, num / 2);

        // If num is even
        if(num % 2 == 0) {
            return half * half;
        }
        else {
            return x * half * half;
        }
    }

public:
    double myPow(double x, int n) {
        
        // Handle negative exponent
        long long num = n;

        if(num < 0) {
            // If n is negative, convert x to its reciprocal and make n positive
            x = 1 / x;
            num = -num;
        }

        return power(x, num);
    }
};

*/