class Solution {
public:
    int addDigits(int num) {
      while(num-10>=0)  {
          int boss=0;
        while(num>0)
        {
        boss += num%10;
        num = num/10;}
      num =boss;
      }  
        return num;
    }
};