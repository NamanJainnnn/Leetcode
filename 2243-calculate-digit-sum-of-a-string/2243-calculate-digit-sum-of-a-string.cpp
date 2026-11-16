class Solution {
public:
    string digitSum(string s, int k) {
        
        while(s.size()>k){
            string ans="";

            for(int i=0;i<s.size();i+=k){
                int curr=0;
                string chu = s.substr(i,k);
                for(char c:chu){
                    curr+= (c-'0');
                }
                ans+= to_string(curr);
            }
            s= ans;
        }
        return s;
    }
};