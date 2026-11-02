class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi = *max_element(nums.begin(),nums.end());
        int move=0;

        for(int num:nums){
            move+= (maxi - num);
        }
        return move;
        
    }
};