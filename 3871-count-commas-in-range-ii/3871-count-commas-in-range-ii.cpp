class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;
        long long start = 1000;
        long long commas = 1;

        while (n >= start) {
            long long end = start * 1000 - 1; 
            long long range = min(n, end) - start + 1;
            
            ans += range * commas;

            start *= 1000;
            commas++;
        }

        return ans;
    }
};