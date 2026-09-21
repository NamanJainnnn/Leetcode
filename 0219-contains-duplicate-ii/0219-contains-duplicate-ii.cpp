class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        unordered_map<int, int> freq;

        

        for (int right = 0; right < n; right++) {
            freq[nums[right]]++;

            if (freq[nums[right]]> 1) {
                 return true;
            }

            if (right - left + 1 > k) {
                freq[nums[left]]--;
                left++;
            }

            
        }

        return false;
    }
};