class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         int longest = 0;

        for (int i = 0; i < nums.size(); i++) {

            int current = nums[i];
            int count = 1;

            while (find(nums.begin(), nums.end(), current + 1) != nums.end()) {
                current++;
                count++;
            }

            longest = max(longest, count);
        }

        return longest;
    }
};