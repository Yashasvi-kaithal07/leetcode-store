
class Solution {
public:
    bool isAnagram(string s, string t) {

          if(s.size() != t.size())
        {
            return false;
        }

        // Step 2: Character frequency
        int freq[26] = {0};

        for(int i = 0; i < s.size(); i++)
        {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        // Step 3: Check frequency
        for(int i = 0; i < 26; i++)
        {
            if(freq[i] != 0)
            {
                return false;
            }
        }
        return true;
    }
};

    