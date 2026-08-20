class Solution {
public:
    int reverse(int n) {
        long long ans = 0;  // use long long to detect overflow
        while (n != 0) {
            int digit = n % 10;       // take last digit
            ans = ans * 10 + digit;   // build reversed number
            n = n / 10;               // remove last digit
        }
        // check 32-bit signed integer overflow
        if (ans < INT_MIN || ans > INT_MAX) return 0;
        return (int)ans;
    }
};
