class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc=1;
        int dec=1;
        int n=nums.size();
        int ans=0;
        if(n==1){ return 1;}
        if(n==0){ return 0;}
        for(int i=1;i<n;i++){
            if(nums[i] > nums[i-1]){
                inc++;
            }else{
                inc=1;
            }
            ans=max(inc,ans);
        }

        for(int i=1;i<n;i++){
            if(nums[i] < nums[i-1]){
                dec++;
            }else{
                dec=1;
            }
            ans=max(dec,ans);
        }

        return ans;
    }
};