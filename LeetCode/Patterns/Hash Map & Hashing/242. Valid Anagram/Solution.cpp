
class Solution {
public:
    bool isAnagram(string s, string t) {

        // Step 1: Size check
          if(s.size() != t.size())
        {
            return false;
        }

        int n = s.size();

        vector<int> visited(n, 0);

        // Step 2: Har character of s ko t mein search karo
        for(int i = 0; i < n; i++)
        {
            bool found = false;

            for(int j = 0; j < n; j++)
            {
                if(s[i] == t[j] && visited[j] == 0)
                {
                    visited[j] = 1;
                    found = true;
                    break;
                }
            }

            if(found == false)
            {
                return false;
            }
        }


        return true;
    }
};

    