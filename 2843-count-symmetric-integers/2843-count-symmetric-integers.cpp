class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;

        for (int i = low; i <= high; i++) {
            string s = to_string(i);
            int n = s.size();

            if (n % 2 != 0) {
                continue;
            }

            int half = n / 2;
            int leftSum = 0;
            int rightSum = 0;

            for (int j = 0; j < half; j++) {
                leftSum += s[j] - '0';
                rightSum += s[j + half] - '0';
            }

            if (leftSum == rightSum) {
                count++;
            }
        }

        return count;
    }
};