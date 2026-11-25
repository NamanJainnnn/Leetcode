class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        int n = s.size();
        int l = 0;
        vector<vector<int>> ans;

        for (int r = 0; r < n; ) {
            while (r < n && s[l] == s[r]) {
                r++;
            }
            if (r - l >= 3) {
                ans.push_back({l, r - 1});
            }
            l = r;
        }

        return ans;
    }
};