class Solution {
public:
    int heightChecker(vector<int>& nums) {
        vector<int>temp=nums;
        sort(temp.begin(),temp.end());
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=temp[i]){
                count++;
            }
        }
        return count;
    }
};