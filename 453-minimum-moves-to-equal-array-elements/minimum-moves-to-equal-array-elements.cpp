class Solution {
public:
    int minMoves(vector<int>& nums) {
          int mini = nums[0];
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            if (nums[i] < mini) {
                mini = nums[i];
            }
        }

        int moves = sum - (nums.size() * mini);

        return moves;
    }
};