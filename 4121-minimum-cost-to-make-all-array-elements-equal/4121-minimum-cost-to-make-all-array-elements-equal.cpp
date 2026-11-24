class Solution {
public:
    long long minCost(vector<int>& nums) {
        int n = nums.size();

        long long ans= LLONG_MAX;

        for(int i=0;i<n;){
            int R=i;
            int L=i;

            while( R+1 < n && nums[R+1] == nums[L]){
                R++;
            }
            if(R>=1 && L<=n-2){
                long long val = 1LL * nums[L];
                long long left = L * val;
                long long right = 1LL * (n - R - 1) * val;
                ans= min(ans, left+right);
            }
            i=1+R;
        }
        return ans;
    }
};