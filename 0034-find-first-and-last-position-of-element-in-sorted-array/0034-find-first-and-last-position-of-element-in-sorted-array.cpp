class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, h = n - 1;
        int first = -1, last = -1;        
        while (l <= h) {
            int g = (l + h) / 2;
            if (nums[g] < target)
                l = g + 1;
            else if (nums[g] > target)
                h = g - 1;
            else {
                first = g;
                h = g - 1;
            }
        }        
        l = 0;
        h = n - 1;        
        while (l <= h) {
            int g = (l + h) / 2;
            if (nums[g] < target)
                l = g + 1;
            else if (nums[g] > target)
                h = g - 1;
            else {
                last = g;
                l = g + 1;
            }
        }
        return {first, last};
    }
};