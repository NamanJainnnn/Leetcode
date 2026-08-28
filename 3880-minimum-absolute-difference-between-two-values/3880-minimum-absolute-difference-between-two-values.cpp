class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int ans=INT_MAX;
        int n= nums.size();

        unordered_map<int,int>freq;
        for(int num : nums){
            freq[num]++;
        }

        if(freq[2]==0 || freq[1]==0){
            return -1;
        }
        for(int i =0;i<n;i++){
            if(nums[i]==1){
                for(int j =0;j<n;j++){
                    if(nums[j]==2){
                        ans= min(ans, abs(i-j));
                    }else{
                        continue;
                    }
                }
            }else{
                continue;
            }
        }
     return ans;
    }
};