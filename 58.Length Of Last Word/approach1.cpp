class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
	     string word;
	  vector<std::string> colour ;
	while (ss >> word) {
   colour.push_back(word);
	}
	   int n = colour.size();
       string final = colour[n-1];
       int final_size = final.size();   
       return final_size;
    }
};