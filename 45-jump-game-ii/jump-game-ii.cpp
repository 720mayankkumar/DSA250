class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0;
        int reach = 0;
        int end = 0;

        for (int i = 0; i < nums.size() - 1; i++) {

            reach = max(reach, i + nums[i]);

            if (i == end) {
                jumps++;
                end = reach;
            }
        }

        return jumps;
    }
};

