/*

class Solution {
    int MOD = 1000000007;

    long long power(long long n, long long exp) {

        // Base case
        if(exp == 0) return 1;

        long long half = power(n, exp / 2) % MOD;

        if(exp % 2 == 0) {
            return (half * half) % MOD;
        }
        else {
            return (n * ((half * half) % MOD)) % MOD;
        }
    }

public:
    int countGoodNumbers(long long n) {
        
        long long atEven = (n + 1) / 2;
        long long atOdd = n / 2;

        long long even = power(5, atEven);
        long long odd = power(4, atOdd);

        return (even * odd) % MOD;
    }
};

*/