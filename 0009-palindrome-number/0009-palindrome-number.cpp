class Solution {
public:
    bool isPalindrome(int n) {
        if (n < 0) {
            return false; // Negative numbers are not palindromes
        }
        int dup = n;
        long rev = 0;
        while (n > 0) {
            int l = n % 10;
            rev = (rev * 10 )+ l;
            n = n / 10;
        }
        return dup == rev; // Return true or false directly
    }
};