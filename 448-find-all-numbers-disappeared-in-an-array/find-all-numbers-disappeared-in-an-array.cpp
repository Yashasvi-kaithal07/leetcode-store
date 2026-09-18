class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // int n = nums.size();
        
        // unordered_set<int> st(nums.begin(), nums.end());
        // vector<int> ans;

        // for(int i = 1; i <= n; i++) {
        //     if(st.find(i) == st.end()) {
        //         ans.push_back(i);
        //     }
        // }

        // return ans;

            int n = nums.size();
        vector<int> ans;

        // Mark the index corresponding to every number
        for(int i = 0; i < n; i++) {
            int index = abs(nums[i]) - 1;

            if(nums[index] > 0) {
                nums[index] = -nums[index];
            }
        }

        // Positive index means number is missing
        for(int i = 0; i < n; i++) {
            if(nums[i] > 0) {
                ans.push_back(i + 1);
            }
        }

        return ans;

    }
};