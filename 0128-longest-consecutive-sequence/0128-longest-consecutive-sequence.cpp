class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n = nums.size();
        int maxi=1;
        int counter=1;

        map<int,int>table;
        for(int num:nums){
            table[num]++;
        }
        
        vector<pair<int,int>>hset(table.begin(),table.end());
        if(hset.size()<1){return 0;}
        for(int i = 1; i < hset.size();i++ ){
            if(hset[i].second > 0 && hset[i].first== hset[i-1].first + 1){
                counter++;
                
            }else{
                counter=1;
            }
         maxi= max(maxi,counter);
        }
    
    return maxi;
    
    }
};