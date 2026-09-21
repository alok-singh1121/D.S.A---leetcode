class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int, int> f;        
        int n = grid.size();
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                f[grid[i][j]]++;
            }
        }
        int repeated = -1;
        int missing = -1;
        for(int i = 1; i <= n * n; i++) {
            if(f[i] == 2) {
                repeated = i;
            }
            else if(f[i] == 0) {
                missing = i;
            }
        }
        return {repeated, missing};
    }
};