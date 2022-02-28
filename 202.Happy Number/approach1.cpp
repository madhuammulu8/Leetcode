class Solution {
public:
       int numSquareSum(int n) 
        { 
            int squareSum = 0; 
            while (n) 
            { 
                squareSum += (n % 10) * (n % 10); 
                n /= 10; 
            } 
            return squareSum; 
        }
    
    bool isHappy(int n) {
        int a=n,b=n;
        do{
         a = numSquareSum(n);
          b = numSquareSum(numSquareSum(n));
        }
        while(a!=b);
        return a == 1;
        
         
    }
};