class Solution {
public:
    bool isPalindromic(string s) {
        string binStr = "";
        for (char c : s) {
            binStr += bitset<8>(c).to_string();
        }
        
        int left = 0, right = binStr.length() - 1;
        while (left < right) {
            if (binStr[left] != binStr[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};