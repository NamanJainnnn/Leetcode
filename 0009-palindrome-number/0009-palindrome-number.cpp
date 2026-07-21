class Solution {
public:
    bool isPalindrome(int x) {
        vector<int>arr;
        if(x<0){return false;}
        while(x>0){
        int num = x%10;
        arr.push_back(num);
        x=x/10;
        }
        int n = arr.size();
        int i =0;
        int j = n-1;
        while(i<j){
            if(arr[i] != arr[j]){
                return false;
            }
         i++;
         j--;
        }
     return true;
    }
};