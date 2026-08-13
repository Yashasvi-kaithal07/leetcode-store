class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0) return false;

        int temp =x;
        long long rev=0;
        int ld;
    while(temp>0){
         ld= temp % 10;
        rev = rev * 10 +ld;
        temp = temp / 10;
        }
    return (rev == x); 
    }
};