class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int>leftsum;
        vector<int>rightsum;
        vector<int>ans;
        int leftinitial=0;
        int total=0;

        for(int i =0; i<n;i++){
            total+= nums[i];
        }
        
        leftsum.push_back(0);
        for(int i =0; i<n-1;i++){
            leftinitial+= nums[i];
            leftsum.push_back(leftinitial);
        }
    
        for(int i =0 ; i <n ; i++){
            rightsum.push_back(total-nums[i]);
            total = total - nums[i];
        }

        for(int i =0;i<n;i++){
            ans.push_back(abs(leftsum[i]-rightsum[i]));
        }
    
    
        return ans;
    }
};