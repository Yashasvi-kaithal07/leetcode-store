class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    int n = nums.size();
       
    //BRUTE-----------------------------------------
    //         vector<int> f(n, 0);
    //     for (int i = 0; i < n; i++) {
    //         int c = 0;
    //         for (int j = 0; j < n; j++) {
    //             if (nums[i] == nums[j]) {
    //                 c++;
    //             }
    //         }
    //         f[i] = c; 
    //     }

    //     for (int i = 0; i < n; i++) {
    //         if (f[i] >= 2) {
    //             return true;
    //         }
    //     }
    //     return false;
    // }

    //BETTER-----------------------------------
    sort(nums.begin(), nums.end());
    for(int i=0; i<n-1 ; i++){
        if(nums[i]==nums[i+1]){
            return true;
        }
    }
    return false;
    }
};