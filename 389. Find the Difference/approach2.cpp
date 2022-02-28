class Solution {
public:
    char findTheDifference(string s, string t) {
        int a = s.size();
        int b = t.size();
        
        for(int i=0;i<a;i++)
        {
         t[i+1]+= t[i]-s[i];
            cout<<t[i+1];
        }
        return t[b-1];           
    }
};