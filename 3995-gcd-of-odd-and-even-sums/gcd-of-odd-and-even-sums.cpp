class Solution {
private:
    int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }

public:
    int gcdOfOddEvenSums(int n) {
        int osum = 0, esum = 0;

        
        for (int i = 1; i <= 2*n; i += 2) {
            osum += i;
        }

            for (int i = 2; i <= 2*n; i += 2) {
            esum += i;
        }

        return gcd(osum, esum);
    }
};
