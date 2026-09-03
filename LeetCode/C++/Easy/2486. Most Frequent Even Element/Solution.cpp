class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
       unordered_map<int,int>mp;

        int maxf=0;
        int ans=-1;

        for(int x:nums){
            if( x %2 ==0){
                 mp[x]++;
            }
        }

        for(auto it : mp){
           if( it.second > maxf){
            maxf=it.second;
            ans=it.first;
           }
           
           else if(it.second==maxf && it.first<ans){
            return it.first;
           }

        }

            return ans;
    }
};