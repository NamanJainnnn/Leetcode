class Solution {
public:
    int numberOfSpecialChars(string word) {
        //a-A=32
        int ans=0;
        vector<bool>small(26,false);
        vector<bool>big(26,false);

        for(char c:word){
            if(c >= 'a' && c<= 'z'){
                small[c-'a']=true;
            };
            if(c >= 'A' && c<= 'Z'){
                big[c-'A']=true;
            };

        }
        
        for(int i =0;i<26;i++){
            if(small[i] && big[i]){
                ans++;
            }
        }
        
        return ans;
    }
};