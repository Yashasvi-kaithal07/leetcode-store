class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
         int maxsum = INT_MIN; 

        //BRUTE FORCE
    //     for (int i = 0; i < n; i++) {
    //         for (int j = i; j < n; j++) {
    //             int sum = 0;
    //             for (int k = i; k <= j; k++) {
    //                 sum += nums[k];
    //             }
    //             maxsum = max(maxsum, sum); 
    //         }
    //     }
    //     return maxsum; 
    // }


    for(int i = 0; i < n; i++)
{
    int sum = 0;

    for(int j = i; j < n; j++)
    {
        sum += nums[j];

        maxsum = max(maxsum, sum);
    }
}
    return maxsum;
}

};
