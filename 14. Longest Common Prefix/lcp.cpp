class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string rs;
        sort(strs.begin(),strs.end());
        // return strs[0][1];
        string a = strs[0];
        string b = strs[n-1];
         for(int i=0;i<a.size();i++)
        {
       
           if(a[i] == b[i]){
             rs.push_back(a[i]);}
             else
             {
                 break;
             }
             }
            return rs;

    }
};