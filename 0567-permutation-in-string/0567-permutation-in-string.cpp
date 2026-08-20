class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k = s1.size();
        int n = s2.size();
        int left=0;
        vector<int>one(26,0);
        vector<int>two(26,0);

        for(int i =0;i <k;i++){
            one[s1[i]-'a']++;
        }

        for(int right=0;right<n;right++){
            two[s2[right]-'a']++;
            if(right-left+1 > k){
                two[s2[left]-'a']--;
                left++;
            }
            if(one == two){
                return true;
            }
        }
        return false;
    }
};