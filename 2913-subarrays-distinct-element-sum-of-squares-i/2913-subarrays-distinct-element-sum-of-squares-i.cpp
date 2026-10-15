class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n =nums.size();
        int ans=0;

        for(int i=0;i<n;i++){
            unordered_set<int> diselements;
            for(int j=i;j<n;j++){
                diselements.insert(nums[j]);
                int count = diselements.size();
                ans += count*count;
            }
        }
        return ans;
    }
};