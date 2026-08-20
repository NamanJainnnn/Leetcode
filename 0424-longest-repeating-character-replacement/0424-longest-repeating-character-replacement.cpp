class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int left=0;
        int maxlen= 0;
        int maxfreq=0;

        unordered_map<char,int>freq;

        for(int right=0; right<n ;right++){
            freq[s[right]]++;
            maxfreq = max(maxfreq, freq[s[right]]);

            if((right-left+1) - maxfreq <= k){
                maxlen = max(maxlen,right-left+1);
            }else{
                freq[s[left]]--;
                left++;      
            }
        }
     return maxlen;
    }
};