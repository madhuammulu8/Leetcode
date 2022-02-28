class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(int i=0;i<s.size();i++)
        {
            if(int(s[i])>=97 && int(s[i]) <= 122)
            {
                str+= s[i];
            }
             if(int(s[i])>=65 && int(s[i]) <= 90)
            {
                str+= tolower(s[i]);
            }
             if(int(s[i])>=48 && int(s[i]) <= 57)
            {
                str+= s[i];
            }
        }
        int a=0;
        int b=str.size()-1;
        while(a<=b)
        {
            if(str[a]==str[b])
            {
                a++;
                b--;
            }
            else
            { return false;}
            
        }
        return true;
    }
};