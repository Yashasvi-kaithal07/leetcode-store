class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if(s.size() != t.size()) {
            return false;
        }

        int sToT[256];
        int tToS[256];

        for(int i = 0; i < 256; i++) {
            sToT[i] = -1;
            tToS[i] = -1;
        }

        for(int i = 0; i < s.size(); i++) {

            int a = s[i];
            int b = t[i];

            
            if(sToT[a] != -1 && sToT[a] != b) {
                return false;
            }

            
            if(tToS[b] != -1 && tToS[b] != a) {
                return false;
            }

            sToT[a] = b;
            tToS[b] = a;
        }

        return true;
    }
};