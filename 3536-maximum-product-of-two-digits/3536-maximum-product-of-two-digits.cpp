class Solution {
public:
    int maxProduct(int n) {
        vector<int>arr;
        while(n>0){
            int rem = n%10;
            arr.push_back(rem);
            n=n/10;
        }

        sort(arr.begin(),arr.end(),greater<int>());

        int ans= arr[0]*arr[1];
        return ans;
    

    }
};