class Solution {
public:
    long long sumAndMultiply(int n) {
        
        vector<int>nozero;
        while(n > 0){
            int rem = n%10;
            n= n/10;
            if(rem!=0){
            nozero.push_back(rem);
            }else{
                continue;
            }
            
        }
    
        int m= nozero.size();
        long long sum =0;
        for(int num : nozero){
            sum += num;
        }
        long long num=0;
        for(int i = m-1 ; i >=0 ; i--){
            num=num*10 + nozero[i];
        }
        long long ans = num*sum;
        return ans;
    }
};