class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l = 0;
        int h = arr.size() - 1;
        while (l < h) {
            int g = l + (h - l) / 2;
            if (arr[g] < arr[g + 1]) {
                l = g + 1;
            }
            else {
                h = g;
            }
        }
        return l;
    }
};