class Solution {
public:
    
    bool isAnagram(string s, string t) {
        static const int NUM_LETTERS = 27;
        int i;
        int valid[27]= {0};
        // for(int i=0;i<27;i++)
        // {
        //     valid[i] =0;
        // }
        if(s.length() != t.length())
        {
            return false;
        }
        else
        for(int i=0;i<s.length();i++)
        {
            char c = s[i];
            char d = t[i];
            valid[c-'a']++;
            valid[d-'a']--;
        }
            for(int i=0;i<27;i++)
            {
                if(valid[i]!=0)
                    return false;
            }
                    return true;
    }
};