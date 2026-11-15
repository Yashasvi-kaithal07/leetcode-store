class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
         int n = nums.size();

        vector<int> ans;

        // First copy original array
        for (int i = 0; i < n; i++) {
            ans.push_back(nums[i]);
        }

        // Then copy array in reverse order
        for (int i = n - 1; i >= 0; i--) {
            ans.push_back(nums[i]);
        }

        return ans;
    }
};