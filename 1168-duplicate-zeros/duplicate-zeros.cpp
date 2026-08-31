class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int j = 0;
        vector<int> nums(n);
        for (int i = 0; i < n && j<n; i++) {
            if (arr[i] == 0) {
                nums[j] = 0;
                if(j+1<n) nums[j + 1] = 0;
                j = j + 2;
            } 
            else {
                nums[j] = arr[i];
                j++;
            }
        }
        arr=nums;
    }
};