class Solution {
public:
    int countTime(string time) {
        int h = 1;
        if (time[0] == '?' && time[1] == '?') {
            h = 24;
        } else if (time[0] == '?') {
            h = (time[1] <= '3') ? 3 : 2;
        } else if (time[1] == '?') {
            h = (time[0] == '2') ? 4 : 10;
        }

        int m = 1;
        if (time[3] == '?') m *= 6;
        if (time[4] == '?') m *= 10;

        return h * m;
    }
};