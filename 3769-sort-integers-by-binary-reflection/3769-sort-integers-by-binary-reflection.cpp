class Solution {
public:

    long long ref(int n){
        if(n==0)return 0;

        string bin = "";
        while(n>0){
            bin += (n%2 == 0 ? '0' : '1');
            n/=2;
        }
        return stoll(bin,nullptr,2);
    }
    vector<int> sortByReflection(vector<int>& nums) {
        vector<pair<long long,int>>vec;

        for (int x:nums){
            vec.push_back({ref(x), x});
        }

        sort(vec.begin(),vec.end());

        vector<int> res;

        for(auto& p: vec){
            res.push_back(p.second);
        }
        return res;
    }
};