class Solution {
public:
    int lengthOfLastWord(string s) {
	int count =0, n=s.size();
       for(int i = n-1;i>=0;i--)
       {

                  if(s[i]==' ') 
                  {}
            else count++;
                      if(s[i]==' '&& count>0)
           {
               break;
           }
           // else{
           //     count++;
           // }
       }
        return count;