// class Solution {
// public:
//     bool isPalindrome(int x) {

//         if (x < 0) return false;

//         int temp =x;
//         long long rev=0;
//         int ld;
//     while(temp>0){
//          ld= temp % 10;
//         rev = rev * 10 +ld;
//         temp = temp / 10;
//         }
//     return (rev == x); 
//     }
// };

class Solution {
public:
    bool isPalindrome(int x) {
        // negative numbers palindrome nahi hote
        // aur agar last digit 0 hai (except 0 itself), toh bhi palindrome nahi hoga
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;

        int reversedHalf = 0;
        while (x > reversedHalf) {
            int ld = x % 10;
            reversedHalf = reversedHalf * 10 + ld;
            x /= 10;
        }

        // agar even digits hain toh x == reversedHalf
        // agar odd digits hain toh reversedHalf/10 compare karna hoga
        return (x == reversedHalf || x == reversedHalf / 10);
    }
};
