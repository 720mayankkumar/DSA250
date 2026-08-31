// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         vector<int>arr(nums.size());
//         for (int i = 0; i < nums.size(); i++) {
//             arr[i] = nums[i] * nums[i];
//         }

//     sort(arr.begin(), arr.end());
//     return arr;}
// };

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> arr(nums.size());

        int s = 0;
        int e = nums.size() - 1;
        int i = nums.size() - 1;

        while (s <= e) {
            if (abs(nums[s]) > abs(nums[e])) {
                arr[i] = nums[s] * nums[s];
                s++;
            } else {
                arr[i] = nums[e] * nums[e];
                e--;
            }
            i--;
        }

        return arr;
    }
};
