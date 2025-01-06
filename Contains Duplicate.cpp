// class Solution {
// public:
//     bool hasDuplicate(vector<int>& nums) {
//         bool noDuplicate = true;
//         int currentIndex = 0;
//         while(noDuplicate && currentIndex < nums.size()){
//             for(int i = 0; i < nums.size(); i++){
//                 if(nums[currentIndex] == nums[i] && currentIndex != i){
//                     noDuplicate = false;
//                     return true;
//                 }
//             }
//             currentIndex++;
//         }
//         return false;
//     }
// };


class Solution {
    public:
    bool hasDuplicate(vector<int>& nums) {
        int length = nums.size();

        unordered_map<int,int> numberMap;
        for(int i = 0; i < length; i++){
            int n = nums[i];
            if(numberMap[n]){
                numberMap[n]++;
                if(numberMap[n] > 1){
                    return true;
                }
            }
            else{
                numberMap[n] = 1;
            }
        }
        return false;
    }
};
