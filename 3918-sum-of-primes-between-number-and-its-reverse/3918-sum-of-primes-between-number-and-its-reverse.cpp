class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int k = n;
        int rev = 0;

        while (k > 0) {
            int digit = k % 10;
            rev = rev * 10 + digit;
            k = k / 10;
        }

        int maxi = max(n, rev);
        int mini = min(n, rev);
        int sum = 0;

        for (int i = mini; i <= maxi; i++) {
            int num = i;
            bool isPrime = true;

            if (num < 2) continue;

            for (int j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime) {
                sum += num;
            }
        }

        return sum;
    }
};