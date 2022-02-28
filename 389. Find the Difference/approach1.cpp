class Solution {
public:
    char findTheDifference(string s, string t) {
        int a = s.size();
        int b = t.size();
        int i;
        string str = "";
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        // cout<<s;
        // cout<<t;
        // return 'f';
        
        for(i=0;i<a;i++)
        {
            if(s[i]!=t[i])
            {
                return t[i];
            }
        }
        return t[b-1];
         }
};