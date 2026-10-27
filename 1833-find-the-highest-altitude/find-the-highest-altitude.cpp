class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int point = 0; 
        int maxAlti = 0;

        for(int i=0; i<n; i++){
            point += gain[i];
            maxAlti = max(maxAlti, point);
        }
        return maxAlti;
    }
};