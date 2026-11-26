class Solution {
public:
    bool canAliceWin(int n) {
        int stone=10;
        int chance=1;
        while(n>=stone){
            n=n-stone;
            chance++;
            stone--;
            
        }
        return chance%2==0;
    }
};