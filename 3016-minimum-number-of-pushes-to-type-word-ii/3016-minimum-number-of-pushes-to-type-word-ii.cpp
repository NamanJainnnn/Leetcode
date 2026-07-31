class Solution {
public:
    int minimumPushes(string word) {
        vector<int>freq(26,0);
        for(char c: word){
            freq[c-'a']++;
        }
        sort(freq.rbegin(),freq.rend());//yo we used rbrgin insted of begin the greater<>()...just found out about this shii

        int pushes=0;
        for(int i =0;i<26;i++){
            if(freq[i]==0){
                break; //base se chota sort kiya h to zero aane par end loop
            }
        
         int multi = (i/8)+1;
         pushes += freq[i]*multi;
                
        }
    return pushes;
    }   
};