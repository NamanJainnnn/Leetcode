class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n= nums.size();
        int sum=k;

        while(true){
            if (find(nums.begin(), nums.end(), sum) != nums.end()){
                sum+=k;
            }else{
                return sum;
            }
        }
    }
};