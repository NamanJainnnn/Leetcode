class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int minodd=INT_MAX;
        int n= nums.size();

        for(int i =0;i<n;i++){
            if(nums[i] < minodd && nums[i]%2!=0){
                minodd= nums[i];
            }
        }
        if(minodd==INT_MAX){
            return true;
        }
        bool ans= true;
        for(int i =0;i<n;i++){
            if(nums[i]%2==0 && (nums[i]-minodd)<1){
                ans=false;
                break;
            }
        }
        
        return ans;
    }
};