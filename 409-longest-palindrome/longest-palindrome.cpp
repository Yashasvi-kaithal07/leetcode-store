
class Solution {
public:
    int longestPalindrome(string s) {
        int f[256] = {0};

        for(char ch : s) {
            f[(unsigned char)ch]++; //lower and upper case letters ks liye 'unsigned'
        }

        int ans = 0;
        bool hasOdd = false;

    
        for(int i = 0; i < 256; i++) {
            if(f[i] % 2 == 0) {  // even freq ke liye pairs ko use kiya hai
                ans += f[i];
            }
            else {
                ans += f[i] - 1;  // odd me -1 kyuki pairs me ek leftout hoga
                hasOdd = true;
            }
        }

        // Step 3: Add one center character
        if(hasOdd) {
            ans++;
        }

        return ans;
    }
};
