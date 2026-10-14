class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if ((long long)num * 9 < sum) return "";
        
        string ans = "";
        ans.reserve(num);
        
        for (int i = 0; i < num; ++i) {
            int max_future = (num - 1 - i) * 9;
            int cur = sum - max_future;
            
            if (cur < 0) cur = 0;
            if (cur > 9) cur = 9;
            
            cur = max(cur, min(9, sum - (num - 1 - i) * 9));
            
            int min_needed = sum - (num - 1 - i) * 9;
            cur = min(9, sum);
            if (cur < min_needed) cur = min_needed;
            
            ans += to_string(cur);
            sum -= cur;
        }
        
        if (sum > 0) return "";
        return ans;
    }
};