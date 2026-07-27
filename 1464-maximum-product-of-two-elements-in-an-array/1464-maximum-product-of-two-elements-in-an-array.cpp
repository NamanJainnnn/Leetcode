class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n= nums.size();

        sort(nums.begin(),nums.end(),greater<int>());

        int ans=0;
        int one= nums[0]-1;
        int two= nums[1]-1;

        ans= one*two;
        return ans;
    }
};