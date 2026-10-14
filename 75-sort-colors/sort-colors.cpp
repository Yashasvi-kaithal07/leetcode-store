    
class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int, int> mp;

        // Step 1: Count frequencies
        for(int it : nums) {
            mp[it]++;
        }

        // Step 2: Fill the array in sorted order
        int index = 0;

        for(int color = 0; color <= 2; color++) {
            int freq = mp[color];

            for(int j = 0; j < freq; j++) {
                nums[index] = color;
                index++;
            }
        }
    }
};

    