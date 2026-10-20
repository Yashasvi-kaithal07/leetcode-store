class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int freq[26];
        for(int i=0; i<26; i++){
            freq[i] = 0;
        }

        for(char ch : text){
            freq[ch - 'a']++ ;
        }
          int ans = min({
            freq['b' - 'a'],
            freq['a' - 'a'],
            freq['l' - 'a'] / 2,
            freq['o' - 'a'] / 2,
            freq['n' - 'a']
        });

        return ans;
    }
};