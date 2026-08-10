class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        
        double ans=0.00;
        sort(prices.begin(),prices.end(), greater<int>());
        sort(discounts.begin(),discounts.end(), greater<int>());

        int n = prices.size();
        int m = discounts.size();

        for(int i =0 ; i<n ; i++){
            if(i<m){
            ans += (prices[i] * (100.0 - discounts[i])) / 100;
            }else{
                ans+= prices[i];
            }
        
        }
     return ans;
    }
};