class Solution {
public:
    int minSteps(string s, string t) {
   vector<int> freq(26, 0);

        // Count characters of s
        for(char ch : s) {
            freq[ch - 'a']++;
        }

        // Match/remove characters using t
        for(char ch : t) {
            freq[ch - 'a']--;
        }

        int ans = 0;

        // Positive frequencies are the required replacements
        for(int count : freq) {
            if(count > 0) {
                ans += count;
            }
        }

        return ans;
    }
};