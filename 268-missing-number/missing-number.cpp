class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
         int tsum=0;
        int sum=0;

        for(int i=0 ; i<=n ; i++){
            tsum += i;
        }

        for(int i=0 ; i<n; i++){
            sum += nums[i];
        }
        int missing_element = tsum - sum;
        return missing_element;
    }
};