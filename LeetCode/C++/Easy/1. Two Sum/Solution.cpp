class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};  // agar sum target ke equal hai toh indices return karo
                }
            }
        }
        return {}; // agar koi pair nahi mila toh empty vector return karo
    }
};
