class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n= nums.size();

        int low =0, high = 0, sum =0;
        int minLen = INT_MAX;

        while(high < n){
            sum += nums[high];
                while( sum >= target){
                    int len = high - low +1;
                    minLen = min(minLen, len);

                    sum -= nums[low];
                    low++;
                }
                high++;
            }
            if(minLen == INT_MAX){
                return 0;
            }
            else{
                return minLen;
            }
    } 
};