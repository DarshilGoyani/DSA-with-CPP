class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int original = x;
        long long reverce = 0;
        while(x != 0){
            int last = x % 10;
            reverce = reverce * 10 + last;
            x /= 10;
        }
        return original == reverce;
    }
};