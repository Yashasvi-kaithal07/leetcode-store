class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int>Alti(n);
        int point = 0;
        int maxAlti =0;

          for(int i= 0; i<n ; i++){
            point += gain[i];
            Alti[i] = point;
          }
        for(int i=0; i<n ; i++){
            maxAlti = max(maxAlti, Alti[i]);
        }
        return maxAlti;
    }
};