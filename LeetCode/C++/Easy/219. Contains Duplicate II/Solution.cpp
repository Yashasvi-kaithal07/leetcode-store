class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();

//-----BRUTE
//     for (int i = 0; i < n; i++) {
//         for (int j = i+1; j < n; j++) {
//             if (nums[i] == nums[j] && (j - i) <= k) {
//                return true;
//             }
//         }
//     }

//    return false;


        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++)
        {
            // Agar element pehle se map mein hai
            if(mp.find(nums[i]) != mp.end())
            {
                // Current index - previous index
                if(i - mp[nums[i]] <= k)
                {
                    return true;
                }
            }

            mp[nums[i]] = i;
        }

        return false;
    }
};