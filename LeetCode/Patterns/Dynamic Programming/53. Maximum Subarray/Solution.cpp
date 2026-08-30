class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
         
        //BRUTE FORCE
        //int maxsum = INT_MIN; 
    //     for (int i = 0; i < n; i++) {
    //         for (int j = i; j < n; j++) {
    //             int sum = 0;
    //             for (int k = i; k <= j; k++) {
    //                 sum += nums[k];
    //             }
    //             maxsum= max(maxsum, sum); 
    //         }
    //     }
    //     return maxsum; 
    // } };

           //BETTER
     //int maxsum = INT_MIN; 
//     for(int i = 0; i < n; i++)
// {
//     int sum = 0;

//     for(int j = i; j < n; j++)
//     {
//         sum += nums[j];

//         maxsum = max(maxsum, sum);
//     }
// }
//     return maxsum;
// }
//};

      //OPTIIMISATION
int sum=0;
int maxsum=nums[0];

for(int i=0 ; i<n ;i++){
    sum+=nums[i];
    if(sum > maxsum){
        maxsum=sum;
    }
     if( sum < 0){
        sum=0;
    }
}
return maxsum;
    }
};