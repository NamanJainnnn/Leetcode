class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int temp=nums[0];
        long long sum=nums[0];
        for(int i =1; i<n;i++){
            temp = temp ^ nums[i];
            sum+=nums[i];
        }
        if(sum==0){
            return 0;
        }
        if (temp==0){
            return n-1;
        }else{
            return n;
        }
    }
};