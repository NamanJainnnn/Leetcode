class Solution {
public:
    bool isIsomorphic(string s, string t) {
    
        if (s.length() != t.length()) return false;

        unordered_map<char, char> mapS2T; 
        unordered_map<char, char> mapT2S; 

        for (int i = 0; i < s.length(); ++i) {
            char charS = s[i];
            char charT = t[i];

            if (mapS2T.count(charS) && mapS2T[charS] != charT) {
                return false;
            }

            if (mapT2S.count(charT) && mapT2S[charT] != charS) {
                return false;
            }

            mapS2T[charS] = charT;
            mapT2S[charT] = charS;
        }

        return true;
    }

};