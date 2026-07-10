class Solution {
public:
    bool backspaceCompare(string s, string t) {
        std::string first = "";
        std::string second = "";
        bool res;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '#') {
                first.push_back(s[i]);
            } else if (!first.empty()) {
                first.pop_back();
            }
        }
        for (int i = 0; i < t.size(); i++) {
            if (t[i] != '#') {
                second.push_back(t[i]);
            } else if (!second.empty()) {
                second.pop_back();
            }
        }
        if (first == second) {
            res = true;
        } else {
            res = false;
        }
        return res;
    }
};