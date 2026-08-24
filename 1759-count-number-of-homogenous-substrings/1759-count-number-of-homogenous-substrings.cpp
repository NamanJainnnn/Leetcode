class Solution {
public:
    int countHomogenous(string s) {
        // 1+2+3.....
        //agar agla digit same to k++; ans+= k+1 a
        //agar agla digit diff. to k=0

        int n = s.size();
        long long sum=0;
        long long k=0;
        int MOD = 1e9 + 7;

        for(int i =0; i<n;i++){
            if(i>0 && s[i] == s[i-1]){
                k++;
            }else{
                k=1;
            }
        sum= (sum+ k)% MOD;
        }
        return sum;
    }
};