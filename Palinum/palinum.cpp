class Solution {
public:
     int revnum(int y){
            int rev = 0;
         while(y!=0){
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && y%10 > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && y%10 < -8)) return 0;
            rev = rev*10 + y%10;
            y/=10;
         }
            return rev;
        }
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int res = revnum(x);
        if(res==x)
            return true;
        else return false;
    }
};
