class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        vector<int>sorted;
        sorted = arr;

        sort(sorted.begin(),sorted.end());

        unordered_map<int,int>ht;
        int count =1;

        for(int num:sorted){
            if(ht.find(num)==ht.end()){
                ht[num]=count;
                count++;
            }    
        }
        for(int i =0; i < arr.size(); i++){
            arr[i] = ht[arr[i]];
        }
        return arr;
        
    }
};