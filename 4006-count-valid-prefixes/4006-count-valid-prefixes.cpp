class Solution {
public:
    int countValidPrefixes(string s) {
        int ans=0;
        int n= s.size();

        vector<int>freq(2);

        for(char c:s){
            freq[c - '0']++;
            if(abs(freq[0]- freq[1]) <= 1 ){
                ans++;
            }
        }
        return ans;
    }
};