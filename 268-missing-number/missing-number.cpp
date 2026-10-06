class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int hasharr[n+1];

        for(int i=0 ; i<= n; i++){
            hasharr[i] = 0;
        }

        for(int i=0 ; i< n; i++){
            hasharr[nums[i]] = 1;
        }

         for(int i=0 ; i<= n; i++){
            if(hasharr[i] == 0){
                return i;
            }
         }
         return -1;

    }
};