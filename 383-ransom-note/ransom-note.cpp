class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       map<char, int> freq;
        map<char, int> freq2;

        for(char ch : ransomNote) {
            freq[ch]++;
        }

        for(char ch : magazine) {
            freq2[ch]++;
        }

        for(auto it : freq) {
            if(freq2[it.first] < it.second) {
                return false;
            }
        }

        return true;
    }
};