class Solution {
public:
    int firstUniqChar(string s) {
        // Step 1: Frequency count
      int f[26]={0};
      for(int i=0; i < s.size(); i++){
        f[s[i]-'a']++;
      }

    //    for(char c : s) {
    //         f[c - 'a']++;
    //     }

        // Step 2: Find first unique
        for(int i = 0; i < s.size(); i++) {
            if(f[s[i] - 'a'] == 1) {
                return i;
            }
        }
        return -1;
    }
};
 
