class Solution {
public:
    int maxDistinct(string s) {
          int freq[26] = {0};
        int count = 0;

        for (int i = 0; i < s.size(); i++) {
            int index = s[i] - 'a';

            if (freq[index] == 0) {
                count++;
                freq[index]++;
            }
        }

        return count;
    }
};