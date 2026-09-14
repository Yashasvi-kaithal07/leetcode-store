class Solution {
public:
    int differenceOfSum(vector<int>& nums) {

        int ans = 0;

        for(int num : nums) {

            ans += num;

            int temp = num;

            while(temp) {
                ans -= temp % 10;
                temp /= 10;
            }
        }

        return abs(ans);
    }
};