class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";
        vector<string> ans;

        

        for (string word : words) {
            bool r1 = true;
            bool r2 = true;
             bool r3 = true;
            for (char c : word) {
                c = tolower(c);
                if (row1.find(c) == string::npos) {
                    r1 = false;
                }
                if (row2.find(c) == string::npos) {
                    r2 = false;
                }
                if (row3.find(c) == string::npos) {
                    r3 = false;
                }
            }
            if (r1 || r2 || r3) {
                ans.push_back(word);
            }
        }

        return ans;
    }
};