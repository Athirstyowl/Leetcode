// Find any 2 numbers in an Array which adds up to the target
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for(int i = 0; i<nums.size(); ++i){
            int neededMore = target - nums[i];
            if(mp.count(neededMore)){
                if(mp[neededMore] != i){
                    return {mp[neededMore], i};
                }
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};
