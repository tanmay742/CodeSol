class Solution {
public:
    bool isPalindrome(int x) {
        long long  int rev=0;
      long long  int num =x;
        if(num<0)
            return false;
        while(num!=0)
        {
            rev=rev*10+(num%10);
            num/=10;
        }
            if(x==rev)
            {return true;}
        else
            return false;
    }
};