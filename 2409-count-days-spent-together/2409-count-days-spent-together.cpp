class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        auto gettotal=[](string s){

            int m = stoi(s.substr(0,2));
            int d = stoi(s.substr(3,2));
            int total= d;

            for(int i=1;i<m;i++){
                if(i==2){
                    total+=28;
                }
                else if(i==4 || i==6 ||i==9 ||i==11){
                    total+= 30;
                }else{
                    total+=31;
                }
            }
            return total;

        };

        int aa= gettotal(arriveAlice);
        int la= gettotal(leaveAlice);
        int ab= gettotal(arriveBob);
        int lb= gettotal(leaveBob);

        int maxi= max(aa,ab);
        int mini = min(la,lb);

        return  max(0,mini-maxi+1);
        

    }
};