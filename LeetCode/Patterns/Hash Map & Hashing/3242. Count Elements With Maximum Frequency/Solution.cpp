// class Solution {
// public:
//     int maxFrequencyElements(vector<int>& nums) {
//         int i,j;
//         for(i=0; i<n)
//     }
// };

class Solution {
public:
 int maxFrequencyElements(vector<int>& nums) {
        int i,j;
          int n = nums.size();
        int f[n]; // frequency array
        for(i=0; i<n ;i++){
            int c=0;
            for(j=0; j<n ; j++){
                if(nums[i]==nums[j]){
                    c++;
                } 
            }
            f[i]=c;
        }


    int max=f[0];
    for(i=1; i<n ;i++){
        if(f[i] > max){
            max=f[i];
        }
    }

    int s=0;
    
    for(i=0; i<n ;i++){
     int flag=0;
     for(int k=0; k<i ; k++){
        if(nums[i] == nums[k]){
            flag=1;
            break;
        }
     }
     if(flag==0 && f[i]==max){
        s+=f[i];
     }
    }
        return s;
    }
};