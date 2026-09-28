class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int maxi =0;
        vector<int>ans;

        for(auto c:s){
            if(c =='('){
                maxi++;     
            }
            if(c == ')'){
                maxi--;
            }
            ans.push_back(maxi); 
        }
        maxi = *max_element(ans.begin(),ans.end());

        return maxi;
    }
};