class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>table;

        for(int num : nums){
            table[num]++;
        }
        vector<pair<int,int>>hashpair(table.begin(),table.end());

        sort(hashpair.begin(),hashpair.end() , [](auto& a ,auto& b){
            return a.second > b.second;
        });
        vector<int>ans;
        for(int i = 0; i< k; i++){
            ans.push_back(hashpair[i].first);
        }
    return ans;
    }
};