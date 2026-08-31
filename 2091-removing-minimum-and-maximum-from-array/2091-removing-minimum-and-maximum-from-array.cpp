class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n= nums.size();
        //index-size if >n/2 to move+= index else move+=n-index

        int mini=0;
        int maxi=0;

        for(int i =0;i<n;i++){
            if(nums[i]>nums[maxi]){
                maxi=i;
            }
            if(nums[i]<nums[mini]){
                mini=i;
            }
        }
                    
        
        
        int left= min(mini,maxi);
        int right= max(mini,maxi);
     //very smartttt damn i was overcomplicating same idea

     int fromfront= right+1;
     int fromback = n-left;
     int bothsides = (left+1) + (n-right);

     return min({fromfront,fromback,bothsides});


    }
};