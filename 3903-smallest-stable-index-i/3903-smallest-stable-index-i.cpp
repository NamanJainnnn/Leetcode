class Solution {
public:
    int firstStableIndex(vector<int>& numbers, int t) {
        int n = numbers.size();
        
        for (int i = 0; i < n; i++) {
            int maxi = *max_element(numbers.begin(), numbers.begin() + i + 1);
            int mini = *min_element(numbers.begin() + i, numbers.end());
            
            if (maxi - mini <= t) {
                return i;
            }
        }
        
        return -1;
    }
};