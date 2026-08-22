class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int distcount = 1;
        int unique = nums.back();
        for (int i = nums.size() - 2; i >= 0; i--) {
            if (nums[i] != unique) {
                distcount++;
                unique = nums[i];
            }
            if (distcount == 3) {
                return unique;
            }
        }
        return nums.back();
    }
};
