// class Solution {
// private:
//    int digitcount(int n){
//     int count=0;
//     while(n>0){
//         n=n/10;
//         count ++;
//     }
//     return count ;
//     }

// public:
//     int findNumbers(vector<int>& nums) {
//         int count = 0;
//         for (int i = 0; i < nums.size(); i++) {
//             int digit = digitcount(nums[i]);
//             if (digit % 2 == 0) {
//                 count++;
//             }
            
//         }
//         return count;
//     }
// };
class Solution {
private:
  
public:
    int findNumbers(vector<int>& nums) {
        int evencount = 0;
        for (int i:nums) {
          if((i>9&&i<100) ||(i>999&&i<10000) ||(i==100000)){
            evencount++;
          }
            
        }
        return evencount;
    }
};