class Solution {
public:
    int minInsertions(string s) {
        int n = s.size();
        int open = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                if (open % 2 == 1) {   // pichhle '(' ko sirf ek ')' mila
                    ans++;
                    open--;
                }
                open += 2;
            } else {
                open--;
                if (open == -1) {      // bina '(' ke ')' aaya
                    ans++;
                    open = 1;
                }
            }
        }
        return ans + open;
    }
};