class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int mini = nums[0];
        int move=0;
        for(int num:nums){
            move+=abs(mini-num);
        }
        return move;
    }
};