class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;
        long long x = 1000;   // first threshold where commas start

        while (x <= n) {
            ans += (n - x + 1);  // all numbers from x to n have at least one more comma
            x *= 1000;           // move to next comma tier (e.g., 1,000 → 1,000,000 → 1,000,000,000)
        }

        return ans;
    }
};
