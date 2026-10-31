class Solution {
public:
    int minSwaps(vector<int>& nums) {
        vector<tuple<int, int, int>> sumn;

        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            int n = nums[i];
            while (n > 0) {
                sum += n % 10;
                n = n / 10;
            }
            sumn.push_back({nums[i], sum, i});
        }
        sort(sumn.begin(), sumn.end(), [](auto& a, auto& b) {
            if (get<1>(a) == get<1>(b)) {
                return get<0>(a) < get<0>(b);
            }
            return get<1>(a) < get<1>(b);
        });
        int swaps = 0;
        vector<bool> visited(nums.size(), false);

        for (int i = 0; i < nums.size(); i++) {
            if (visited[i] || get<2>(sumn[i]) == i)
                continue;

            int j = i;
            int cycle = 0;

            while (!visited[j]) {
                visited[j] = true;
                j = get<2>(sumn[j]);
                cycle++;
            }

            swaps += cycle - 1;
        }

        return swaps;
    }
};