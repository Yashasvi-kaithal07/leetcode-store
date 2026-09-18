class Solution {
public:
    int minSteps(string s, string t) {
                int count = 0;

        for(char ch : s) {
            
            // Find same character in t
            auto it = find(t.begin(), t.end(), ch);

            if(it != t.end()) {
                // Character mil gaya, remove it
                t.erase(it);
            }
            else {
                // Character nahi mila
                count++;
            }
        }

        return count;

    }
};