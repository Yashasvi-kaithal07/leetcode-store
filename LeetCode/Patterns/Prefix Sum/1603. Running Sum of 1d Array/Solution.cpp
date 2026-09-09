class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
       
        // for (int i = 1; i < nums.size(); i++) {
        //     nums[i] = nums[i] + nums[i - 1];
        // }

        // return nums;

         vector<int> ans(nums.size());

        ans[0] = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            ans[i] = ans[i - 1] + nums[i];
        }

        return ans;
    }
};