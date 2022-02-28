class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m = s.size();
        int n = t.size();
        int i=0,j=0,count=0;
        while(i<m && j<n)
        {
            if(s[i]==t[j])
            {
                count++;
                i++;
            }
                j++;
        }
      if(count == s.size())
        { return true;}
      return false;    
    }
};