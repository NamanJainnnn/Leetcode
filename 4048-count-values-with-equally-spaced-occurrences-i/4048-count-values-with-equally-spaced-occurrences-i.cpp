class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, vector<int>> pos;

        for (int i = 0; i < nums.size(); ++i) {
            pos[nums[i]].push_back(i);
        }
        int count = 0;

        for (const auto& [val, index] : pos) {
            if (index.size() == 3) {
                int gap1 = index[1] - index[0];
                int gap2 = index[2] - index[1];
                if (gap1 == gap2) {
                    count++;
                }
            }
        }
        return count;
    }
};