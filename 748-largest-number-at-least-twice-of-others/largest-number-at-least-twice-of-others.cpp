class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int> temp = nums;
        sort(temp.begin(), temp.end());
        if (temp.back() >= 2 * temp[temp.size() - 2]) {
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == temp.back()) {
                    return i;
                }
            }
        }
        return -1;
    }
};
