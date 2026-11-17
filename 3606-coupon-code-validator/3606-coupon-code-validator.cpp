class Solution {
public:
    vector<string> validateCoupons(vector<string>& code,
                                   vector<string>& businessLine,
                                   vector<bool>& isActive) {
        vector<pair<string, string>> validCoupons;
        int n = code.size();

        for (int i = 0; i < n; i++) {
            bool valid = true;
            string curr = code[i];

            if (curr.empty()) {
                valid = false;
            } else {
                for (char c : curr) {
                    if (!isalnum(c) && c != '_') {
                        valid = false;
                        break;
                    }
                }
            }

            if (valid && isActive[i] && (businessLine[i] == "electronics" ||
                                         businessLine[i] == "grocery" ||
                                         businessLine[i] == "pharmacy" ||
                                         businessLine[i] == "restaurant")) {
                validCoupons.push_back({businessLine[i], curr});
            }
        }

        sort(validCoupons.begin(), validCoupons.end());

        vector<string> ans;
        for (auto& p : validCoupons) {
            ans.push_back(p.second);
        }

        return ans;
    }
};