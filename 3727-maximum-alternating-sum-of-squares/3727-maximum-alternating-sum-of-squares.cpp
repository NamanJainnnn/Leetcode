class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n= nums.size();
        long long ans=0;
        int i=0;
        int j = n-i-1;

        vector<long long> sq(n);
        for (int k = 0; k < n; ++k) {
            sq[k] = (long long)nums[k] * nums[k];
        }
        
        sort(sq.begin(), sq.end());

        while(i<j){
            ans+=sq[j];
            j--;
            ans-= sq[i];
            i++;
        }

        if(n%2 != 0){
            ans+= sq[j];
        }
        return ans;
    }
};