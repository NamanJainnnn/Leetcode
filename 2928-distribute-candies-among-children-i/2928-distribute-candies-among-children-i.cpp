class Solution {
public:
    int distributeCandies(int n, int limit) {
        int count = 0;
        for (int i = 0; i <= n && i <= limit; i++) {
            for (int j = 0; i + j <= n && j <= limit; j++) {
                int k = n - i - j;
                if (k >= 0 && k <= limit) {
                    count++;
                }
            }
        }
        return count;
    }
};