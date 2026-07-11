class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();

        string neww="";

        for (int i = 0; i < n; i++) {
            s[i] = tolower(s[i]);;
            
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
                neww += s[i];
            } else {
                continue;
            }
        }
        int a = 0;
        int b = neww.size() - 1;

        while (a < b) {
            if (neww[a] != neww[b]) {
                return false;
            }
            a++;
            b--;
        }

        return true;
    }
};