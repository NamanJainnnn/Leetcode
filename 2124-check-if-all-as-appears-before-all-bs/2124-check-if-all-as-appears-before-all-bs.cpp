class Solution {
public:
    bool checkString(string s) {
       
        int a=0;
        for(char c:s){
            if(c == 'a'){
                a++;
            }
        }
        int curr;

        for(char c:s){
            if(c == 'a'){
                curr++;
            }
            if(c == 'b' && curr < a){
                return false;
            }
        }
        return true;
    }
};