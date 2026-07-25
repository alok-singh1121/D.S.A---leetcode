class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> res(n, 0);

        if (k == 0)
            return res;

        int start = 1, end = k;
        if (k < 0) {
            start = n + k;
            end = n - 1;
        }

        int windSum = 0;
        for (int i = start; i <= end; i++) {
            windSum += code[i];
        }

        for (int i = 0; i < n; i++) {
            res[i] = windSum;

            windSum -= code[start % n];
            start++;
            end++;
            windSum += code[end % n];
        }

        return res;
    }
};
