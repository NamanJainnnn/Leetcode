class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<>());
        int ans=1;
        int neg=1;
        int maxi=0;
        for(int i =0;i<3;i++){
            ans*=nums[i];
            maxi=nums[0];
        }
        for(int i =nums.size()-1;i> nums.size()-3;i--){
            neg*=nums[i];
        }
        neg*= maxi;
        ans= max(ans,neg);
        
        return ans;
    }
};