class Solution {
public:
    bool wordPattern(string pattern, string s) {  
        int count=0;
        stringstream ss(s);
        vector<std::string> colour ;
        while (ss >> s) {
        colour.push_back(s);
        count++;
        }
        if(count!=pattern.size())   
        {
            return false;
        }
        else
        {
            unordered_map<char,int>pt;
            unordered_map<string,int>st;
            for(int i=0;i<pattern.size();i++)
            {
                pt[pattern[i]] = i+1;
                st[colour[i]] = i+1;
            }            for(int i=0;i<pattern.size();i++)
            {
                            if(pt[pattern[i]]!=st[colour[i]])
                { 
                    return false; }
            }
        }
        return true;
    }
};