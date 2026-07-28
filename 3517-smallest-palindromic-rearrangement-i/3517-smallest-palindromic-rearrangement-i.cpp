class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        int half = n/2;

        string halff = s.substr(0,half);
        sort(halff.begin(),halff.end());

        string mid="";
        if(n%2!=0){
            mid = s[half];
        }

        string reversee = halff;
        reverse(reversee.begin(),reversee.end());

        return halff+mid+reversee;
    }
};