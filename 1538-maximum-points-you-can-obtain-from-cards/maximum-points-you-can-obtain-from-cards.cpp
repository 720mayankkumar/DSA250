class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int ms = 0, cs = 0;
        int n = cardPoints.size();

        for (int i = 0; i < k; i++) {
            cs = cs + cardPoints[i];
        }

        ms = cs;

        int j = n - 1;
        int i = k - 1;

        while (k--) {
            cs = cs - cardPoints[i];
            cs = cs + cardPoints[j];

            i--;
            j--;

            ms = max(cs, ms);
        }

        return ms;
    }
};