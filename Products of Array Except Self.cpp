class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans(size, 1);
        int pre = 1;
        for(int i = 0; i<size; i++){
            ans[i] = pre;
            pre = pre * nums[i];
        }

        int post = 1;

        for(int j=size-1; j>=0; j--){
            ans[j] = ans[j] * post;
            post = post * nums[j];
        }
        return ans;
    }
};
