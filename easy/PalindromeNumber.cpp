class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 ){
            return false;
        }
        int original = x;
        long long reversed = 0;
        int remainder = 0;
        while( x > 0 ){
            remainder = x % 10;
            reversed = reversed * 10 + remainder;
            x /= 10;
            if (reversed > INT_MAX) {
                return false;
            }
        }
        return reversed == original;
    }
};
