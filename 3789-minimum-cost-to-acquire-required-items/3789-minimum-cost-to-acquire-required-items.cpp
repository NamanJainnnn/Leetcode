class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long n1 = need1, n2 = need2;
        long long c1 = cost1, c2 = cost2, cObject = costBoth;
        
        long long ans = c1 * n1 + c2 * n2;
        ans = min(ans, cObject * max(n1, n2));
        
        long long overlap = min(n1, n2);
        long long rem1 = n1 - overlap;
        long long rem2 = n2 - overlap;
        ans = min(ans, (cObject * overlap) + (rem1 * c1) + (rem2 * c2));
        
        if (cObject < c1 + c2) {
            ans = min(ans, cObject * n1 + max(0LL, n2 - n1) * cObject);
            ans = min(ans, cObject * n2 + max(0LL, n1 - n2) * cObject);
        }
        
        return ans;
    }
};