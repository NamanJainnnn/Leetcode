class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int med = nums[nums.size()/2];
        int move =0;

        for(int num:nums){
            move+= abs(med - num);
        }
        return move;
    }
};