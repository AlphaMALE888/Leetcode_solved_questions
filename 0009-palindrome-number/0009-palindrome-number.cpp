class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }

        long long reverse_num = 0;
        int original = x;

        while(x > 0){
            int rem = x % 10;
            reverse_num = (reverse_num * 10) + rem;
            x /= 10;
        }
        return original == reverse_num;

    }
};