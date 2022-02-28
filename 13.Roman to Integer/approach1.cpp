class Solution {
public:
    int getvall(char c) {
 switch (c)
 {
    case 'I':
 return 1;
     case 'V':
 return 5;
     case 'X':
 return 10;
     case 'L':
 return 50;
     case 'C':
 return 100;
     case 'D':
 return 500;
     case 'M':
 return 1000;
 default:
return 0; 
 }
}    
    int romanToInt(string s) {
       int val(0);
    for(int i=0;i<s.length();i++)
    {
        int n = getvall(s[i+1]);
        int p = getvall(s[i]);
        if(p<n)
        {
          val = val+(n-p);
            i++;
        }
        else{
            val = val+p;
        }
    }
            return val;
    }
};