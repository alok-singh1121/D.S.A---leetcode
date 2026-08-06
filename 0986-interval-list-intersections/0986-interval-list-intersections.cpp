#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList,
                                                vector<vector<int>>& secondList) {
        int i = 0, j = 0;
        vector<vector<int>> res;
        while (i < firstList.size() && j < secondList.size()) {
            int st1 = firstList[i][0];
            int end1 = firstList[i][1];
            int st2 = secondList[j][0];
            int end2 = secondList[j][1];
            int s = max(st1, st2);
            int e = min(end1, end2);
            if (s <= e) {
                res.push_back({s, e});
            
            }
            if (end1 <= end2) {
                i++;
            } else {
                j++;
            }
        }
        return res;
    }
};