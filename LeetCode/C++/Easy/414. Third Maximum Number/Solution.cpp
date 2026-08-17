// class Solution {
// public:
//     int thirdMax(vector<int>& nums) {
//         int n= nums.size();
//         long long v1 = LLONG_MIN;   
//         long long v2 = LLONG_MIN;   
//         long long v3 = LLONG_MIN;     

//             for(int i=0 ; i<n; i++){
//                 if(nums[i] == v1 ||nums[i] == v2||nums[i] == v3){
//                     continue;
//                 }
//                 if(nums[i]>v1){
//                     v3=v2;
//                     v2=v1;
//                     v1=nums[i];
//                 }
//                 else if (nums[i]>v2){
//                     v3=v2;
//                     v2=nums[i];
//                 }
//                 else if ( nums[i]>v3){
//                     v3=nums[i];
//                 }
//     }
//     if(v3 == LLONG_MIN){
//         return v1;
//     }
//     else {
//         return v3;
//     }
//     }
// };

class Solution {
public:
    int thirdMax(vector<int>& nums) {

        // 1. Duplicate elements remove
        unordered_set<int> st(nums.begin(), nums.end());

        // 2. Set ko vector mein convert
        vector<int> v(st.begin(), st.end());

        // 3. Descending order mein sort
        sort(v.rbegin(), v.rend());

        // 4. Third maximum exists?
        if (v.size() >= 3) {
            return v[2];
        }

        // Otherwise maximum
        return v[0];
    }
};