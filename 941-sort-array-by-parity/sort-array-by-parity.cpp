// class Solution {
// public:
//     vector<int> sortArrayByParity(vector<int>& nums) {
//         vector<int>ans;
//         vector<int>temp;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]%2==0){
//                 ans.push_back(nums[i]);
//             }
//             else temp.push_back(nums[i]);
//         }
//         for(int i=0;i<temp.size();i++){
//             ans.push_back(temp[i]);
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> arr;
        int n = nums.size();
        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] % 2 == 0) {
                arr.insert(arr.begin(), nums[i]);
            } else
                arr.push_back(nums[i]);
        }
        return arr;
    }
};