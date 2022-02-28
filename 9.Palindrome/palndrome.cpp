class Solution {
public:
    bool isPalindrome(int x) {
        long sum=0,val=0;
        long check = x;
        if(x<0)
        {
            return false;
        }
        else{
        while(x!=0)
        {
            val=x%10;
            sum =(sum*10)+val;
            x=x/10;   
        }
        if (check == sum)
             return true;
             else
           return false;
        
    }
    }
};