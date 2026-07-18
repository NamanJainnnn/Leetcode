class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        //searching in the searhc space instead of the arr itself!like bookallocation

        int maxipile=0;
        for(int pile:piles){
            maxipile=max(maxipile,pile);
        }
    
        int low=1;
        int high= maxipile;
        int ans=high; //coz ew need min so make ans max

        while(low<=high){
            int mid= low + (high-low)/2;

            long long thours=0;
            for(int pile:piles){
                thours+= (pile+mid-1)/mid;//mid is speed!
            }
       
            if(thours <= h){
                ans=mid;
                high = mid-1;
            }else{
                low=mid+1;
            }
        }
     return ans;
    
    }
};