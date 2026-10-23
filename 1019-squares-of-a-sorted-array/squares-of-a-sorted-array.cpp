class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      int n= nums.size();
      vector<int>a(n);

       int l = 0;
       int r = n-1;
       int k = n-1;

       while(l <= r){
        int leftMostSq = nums[l] * nums[l];
        int rightMostSq = nums[r] * nums[r];

        if(leftMostSq > rightMostSq){
            a[k] = leftMostSq;
            l++;
        }
        else{
            a[k] = rightMostSq;
            r--;
        }
        k--;
       }
      return a;
    }
};