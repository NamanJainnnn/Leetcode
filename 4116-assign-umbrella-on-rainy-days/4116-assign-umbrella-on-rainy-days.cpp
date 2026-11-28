class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        vector<string> answer;
        int n = rain.size();
        int al = 0;
        int bob = 0;

        for (int i = 0; i < n - 1; i++) {
            if (rain[i] == 1 && rain[i + 1] == 1 && al <= bob) {
                answer.push_back("Alice");
                al++;
            } else if (rain[i] == 1 ) {
                answer.push_back("Bob");
                bob++;
            } else {
                answer.push_back("None");
            }
        }
        if (rain[n - 1] == 1) {
            answer.push_back("Bob");
        } else {
            answer.push_back("None");
        }
        return answer;
    }
};