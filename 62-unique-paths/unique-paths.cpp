class Solution {
public:
    int uniquePaths(int m, int n) {
        long long res = 1;
        int totalMoves = m + n - 2;
        int choose = min(m - 1, n - 1);

        for (int i = 1; i <= choose; i++) {
            res = res * (totalMoves - choose + i) / i;
        }

        return (int)res;
    }
};
