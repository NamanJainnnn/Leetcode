class Solution {
public:
    int minOperations(string s) {
        
        string sorted_s = s;
        sort(sorted_s.begin(), sorted_s.end());
        
        if (s == sorted_s) return 0;
         if (s.size() == 2) {
            return -1;
        }
        
        string temp1 = s;
        sort(temp1.begin() + 1, temp1.end());
        if (temp1 == sorted_s) return 1;
        
        string temp2 = s;
        sort(temp2.begin(), temp2.begin() + s.size() - 1);
        if (temp2 == sorted_s) return 1;
        
        string temp3 = s;
        sort(temp3.begin(), temp3.begin() + s.size() - 1);
        sort(temp3.begin() + 1, temp3.end());
        if (temp3 == sorted_s) return 2;
        
        string temp4 = s;
        sort(temp4.begin() + 1, temp4.end());
        sort(temp4.begin(), temp4.begin() + s.size() - 1);
        if (temp4 == sorted_s) return 2;
        
        return 3;
    }
};