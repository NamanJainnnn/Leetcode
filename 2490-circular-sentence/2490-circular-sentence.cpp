class Solution {
public:
    bool isCircularSentence(string sen) {
       int n = sen.size();
       int sp=0;
       bool cir= true;
        for(int i=0;i<n;i++){
            if(sen[i] == ' ' && sen[i-1] != sen[i+1] ){
                cir= false;
                sp++;
            }
        }
        if(sp==0){
            if(sen.front() == sen.back()){
                return true;
            }else{
                return false;
            }
        }
        return cir;
    }
};