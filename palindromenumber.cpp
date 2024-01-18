class Solution {
public:
    bool isPalindrome(int x) {
        int num = x;
        if (x<0)
            return false;
        long int rev = 0;
        int dig = 0, rem = 0;
        while (num>0)
        {
           dig = num%10;
           num = num/10;
           rev = rev*10 + dig;
        }
        if (rev == x)
          return true;
        return false;  
        
    }
};